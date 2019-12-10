module Styles = {
  open Css;

  global(".content", [flex(`num(1.0))]);

  let wrapperStyles =
    style([
      display(`flex),
      flexDirection(`column),
      minHeight(vh(float_of_int(100))),
    ]);

  let button =
    style([
      width(px(300)),
      margin(px(10)),
      fontSize(px(18)),
      color(hex("FFF")),
      backgroundColor(hex("042E89")),
    ]);
};
