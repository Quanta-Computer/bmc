var IVTP = {
    HDR_SIZE: 8,

    CMD_SEND_HID_PACKET: 0x01,
    CMD_SET_BANDWIDTH: 0x02,
    CMD_SET_FPS: 0x03,
    CMD_PAUSE_REDIRECTION: 0x04,
    CMD_REFRESH_VIDEO_SCREEN: 0x05,
    CMD_RESUME_REDIRECTION: 0x06,
    CMD_SET_COMPRESSION_TYPE: 0x07,
    CMD_STOP_SESSION_IMMEDIATE: 0x08,
    CMD_PAINT_BLANK_SCREEN: 0x09,
    CMD_USB_MOUSE_MODE: 0x0a,
    CMD_GET_FULL_SCREEN: 0x0b,
    CMD_ENABLE_ENCRYPTION: 0x0c,
    CMD_DISABLE_ENCRYPTION: 0x0d,
    CMD_ENCRYPTION_STATUS: 0x0e,
    CMD_INITIAL_ENCRYPTION_STATUS: 0x0f,
    CMD_BW_DETECT_REQ: 0x10,
    CMD_BW_DETECT_RESP: 0x11,
    CMD_VALIDATE_VIDEO_SESSION: 0x12,
    CMD_VALIDATED_VIDEO_SESSION: 0x13,
    CMD_GET_KBD_LED_STATUS: 0x14,
    CMD_GET_WEB_TOKEN: 0x15,
    CMD_MAX_SESSION_CLOSE: 0x16,
    CMD_CONNECTION_ALLOWED: 0x17,
    CMD_MEDIA_STATE: 0x18,
    CMD_VIDEO_PACKETS: 0x19,
    CMD_WEB_PREVIEWER_SESSION: 0x1A,
    CMD_WEB_PREVIEWER_CAPTURE_STATUS: 0x1B,
    CMD_SET_MOUSE_MODE: 0x1C,
    CMD_KVM_SHARING: 0x20,
    CMD_KVM_SOCKET_STATUS: 0x21,
    CMD_POWER_STATUS: 0x22,
    CMD_POWER_CTRL_REQUEST: 0x23,
    CMD_POWER_CTRL_RESP: 0x24,
    CMD_SERVICE_INFO: 0x25,
    CMD_KVM_MEDIA_INFO: 0x26,
    CMD_ACTIVE_CLIENTS: 0x27,
    CMD_GET_USER_MACRO: 0x28,
    CMD_SET_USER_MACRO: 0x29,
    CMD_IPMI_REQ_COMMAND: 0x30,
    CMD_IPMI_RES_COMMAND: 0x31,
    CMD_SET_NEXT_MASTER: 0x32,
    CMD_DISPLAY_LOCK_SET: 0x33,
    CMD_DISPLAY_CONTROL_STATUS: 0x34,
    CMD_MEDIA_LICENSE_STATUS: 0x35,
    CMD_KVM_DISCONNECT: 0x36,
    CMD_SET_KBD_LANG: 0x37,
    CMD_MEDIA_FREE_INSTANCE_STATUS: 0x38,
    CMD_KEEP_ALIVE_PKT: 0x39,
    CMD_CONNECTION_COMPLETE_PKT: 0x3a,
    CMD_CONNECTION_FAILED: 0x3b,
    CMD_FPS_DIFF:0x3c,
    KEYBD_INFO_CODE: 0x43,
    POWER_CONTROL_OFF_IMMEDIATE: 0x00,
    POWER_CONTROL_ON:	0x01,
    POWER_CONTROL_CYCLE: 0x02,
    POWER_CONTROL_HARD_RESET: 0x03,
    POWER_CONTROL_SOFT_RESET: 0x05
};

if (typeof define == "function" && define.amd) {
    define(function() {
        return IVTP;

    });
}