#!/bin/sh

_ECHO='/bin/echo'
_CAT='/bin/cat'

PRINTER_DEVICE='/dev/usb/lp0'

log_error () {
	"${_ECHO}" "${@}" >&2
}

thermal_print () {
	"${_ECHO}" -e '\x1b\x40' > "${PRINTER_DEVICE}"
	"${_ECHO}" "${@}" > "${PRINTER_DEVICE}"
	"${_ECHO}" -e '\x0c' > "${PRINTER_DEVICE}"
}

main () {
	if [ -c "${PRINTER_DEVICE}" ]
	then
		thermal_print "${@}"
	else
		log_error 'Printer device not found'
	fi
}

main "${@}"

