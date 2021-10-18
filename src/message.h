#ifndef MESSAGE_H
#define MESSAGE_H

#define DOMAIN_BATCH                                        "batch"
#define COMMAND_BATCH_BAR                                   "--bar"
#define COMMAND_BATCH_ADD                                   "--add"
#define COMMAND_BATCH_SET                                   "--set"
#define COMMAND_BATCH_DEFAULT                               "--default"
#define COMMAND_BATCH_SUBSCRIBE                             "--subscribe"

#define DOMAIN_ADD                                          "add"
#define COMMAND_ADD_ITEM                                    "item"                                  
#define COMMAND_ADD_COMPONENT                               "component"
#define COMMAND_ADD_EVENT                                   "event"

#define DOMAIN_REMOVE                                       "remove"

#define DOMAIN_UPDATE                                       "update"

#define DOMAIN_PUSH                                         "push"

#define DOMAIN_TRIGGER                                      "trigger"

#define DOMAIN_DEFAULT                                      "default"
#define COMMAND_DEFAULT_RESET                               "reset"

#define DOMAIN_SET                                          "set"

#define SUB_DOMAIN_ICON                                     "icon"
#define SUB_DOMAIN_LABEL                                    "label"
#define SUB_DOMAIN_BACKGROUND                               "background"
#define SUB_DOMAIN_GRAPH                                    "graph"

#define PROPERTY_FONT                                       "font"
#define PROPERTY_COLOR                                      "color"
#define PROPERTY_HIGHLIGHT                                  "highlight"
#define PROPERTY_HIGHLIGHT_COLOR                            "highlight_color"
#define PROPERTY_PADDING_LEFT                               "padding_left"
#define PROPERTY_PADDING_RIGHT                              "padding_right"
#define PROPERTY_HEIGHT                                     "height"
#define PROPERTY_BORDER_COLOR                               "border_color"
#define PROPERTY_BORDER_WIDTH                               "border_width"
#define PROPERTY_CORNER_RADIUS                              "corner_radius"
#define PROPERTY_FILL_COLOR                                 "fill_color"
#define PROPERTY_LINE_WIDTH                                 "line_width"
#define PROPERTY_BLUR_RADIUS                                "blur_radius"
#define PROPERTY_DRAWING                                    "drawing"

#define PROPERTY_UPDATES                                    "updates"
#define PROPERTY_POSITION                                   "position"
#define PROPERTY_ASSOCIATED_DISPLAY                         "associated_display"
#define PROPERTY_ASSOCIATED_SPACE                           "associated_space"
#define PROPERTY_UPDATE_FREQ                                "update_freq"
#define PROPERTY_SCRIPT                                     "script"
#define PROPERTY_CLICK_SCRIPT                               "click_script"
#define PROPERTY_ICON                                       "icon"
#define PROPERTY_YOFFSET                                    "y_offset"
#define PROPERTY_WIDTH                                      "width"
#define PROPERTY_LABEL                                      "label"
#define PROPERTY_CACHE_SCRIPTS                              "cache_scripts"
#define PROPERTY_LAZY                                       "lazy"

#define DOMAIN_BAR                                          "bar"
#define PROPERTY_POSITION                                   "position"
#define PROPERTY_MARGIN                                     "margin"
#define PROPERTY_DISPLAY                                    "display"
#define PROPERTY_TOPMOST                                    "topmost"
#define PROPERTY_HIDDEN                                     "hidden"
#define PROPERTY_FONT_SMOOTHING                             "font_smoothing"

#define DOMAIN_SUBSCRIBE                                    "subscribe"
#define COMMAND_SUBSCRIBE_FRONT_APP_SWITCHED                "front_app_switched"
#define COMMAND_SUBSCRIBE_SPACE_CHANGE                      "space_change"
#define COMMAND_SUBSCRIBE_DISPLAY_CHANGE                    "display_change"
#define COMMAND_SUBSCRIBE_SYSTEM_WOKE                       "system_woke"
#define COMMAND_SUBSCRIBE_MOUSE_ENTERED                     "mouse.entered"
#define COMMAND_SUBSCRIBE_MOUSE_EXITED                      "mouse.exited"
#define COMMAND_SUBSCRIBE_MOUSE_CLICKED                     "mouse.clicked"

#define DOMAIN_QUERY                                        "query"
#define COMMAND_QUERY_DEFAULT_ITEMS                         "default_menu_items"
#define COMMAND_QUERY_ITEM                                  "item"
#define COMMAND_QUERY_DEFAULTS                              "defaults"
#define COMMAND_QUERY_BAR                                   "bar"

#define ARGUMENT_COMMON_VAL_ON                              "on"
#define ARGUMENT_COMMON_VAL_TRUE                            "true"
#define ARGUMENT_COMMON_VAL_YES                             "yes"
#define ARGUMENT_COMMON_VAL_OFF                             "off"
#define ARGUMENT_COMMON_VAL_FALSE                           "false"
#define ARGUMENT_COMMON_VAL_NO                              "no"
#define ARGUMENT_COMMON_VAL_TOGGLE                          "toggle"

#define ARGUMENT_UPDATES_WHEN_SHOWN                         "when_shown" 

#define BAR_DISPLAY_MAIN_ONLY                               "main"
#define BAR_DISPLAY_ALL                                     "all"

#define BAR_POSITION_BOTTOM                                 "bottom"
#define BAR_POSITION_TOP                                    "top"

static SOCKET_DAEMON_HANDLER(message_handler);
void handle_message(int sockfd, char *message);

#endif
