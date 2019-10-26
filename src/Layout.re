open Styles;

[@react.component] 
let make = (~children, ~username = "Default User") =>
    <div className=Styles.wrapperStyles>
        <nav>
            <li>
                {ReasonReact.string(username)}
            </li>
        </nav>
        <div className="content">
            {children}
        </div>
        <footer>
            <h3>{ReasonReact.string("Created for Egghead.io - 2019")}</h3>
        </footer>
    </div>