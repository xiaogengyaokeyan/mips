#ifndef LQR3_P2_antiutopia_Djr1_H
#define LQR3_P2_antiutopia_Djr1_H

double LQR3_P2_antiutopia_Djr1(double* tv, int tdim, double* param, int pdim) {

double t1 = tv[0], t2 = tv[1];

double r1 = param[0];
double r2 = param[1];
double r3 = param[2];
double r4 = param[3];
double r5 = param[4];
double r6 = param[5];
double r7 = param[6];
double r8 = param[7];
double r9 = param[8];

double t4 = r2*t1;
double t5 = r3*t2;
double t6 = r1+t4+t5;
double t7 = exp(t6);
double t8 = t7+1.0;
double t9 = 1.0/t8;
double t10 = 1.0/(t8*t8);
double t11 = t9*1.8E1;
double t13 = t10*9.0;
double t12 = t11-t13+1.0;
double t14 = 1.0/t12;
double t15 = t9*t14*2.18E2;
double t16 = t10*(1.0/1.0E1);
double t17 = t16+9.0/1.0E1;
double t18 = t11-1.8E1;
double t19 = 1.0/(t12*t12);
double t20 = t17*t18*t19*1.09E3;
double t21 = t15+t20;
double t22 = r5*t1;
double t23 = r6*t2;
double t24 = r4+t22+t23;
double t25 = exp(t24);
double t26 = t25+1.0;
double t27 = 1.0/t26;
double t28 = 1.0/(t26*t26);
double t29 = t27*1.8E1;
double t40 = t28*9.0;
double t30 = t29-t40+1.0;
double t31 = r8*t1;
double t32 = r9*t2;
double t33 = r7+t31+t32;
double t34 = exp(t33);
double t35 = t34+1.0;
double t36 = 1.0/t35;
double t37 = 1.0/(t35*t35);
double t38 = t36*1.8E1;
double t49 = t37*9.0;
double t39 = t38-t49+1.0;
double t41 = 1.0/t30;
double t42 = t29-1.8E1;
double t43 = 1.0/(t30*t30);
double t44 = t9*t14*1.962E3;
double t45 = t10*(9.0/1.0E1);
double t46 = t45+1.0/1.0E1;
double t47 = t18*t19*t46*1.09E3;
double t48 = t44+t47;
double t50 = 1.0/t39;
double t51 = t36*t50*1.962E3;
double t52 = t37*(9.0/1.0E1);
double t53 = t52+1.0/1.0E1;
double t54 = t38-1.8E1;
double t55 = 1.0/(t39*t39);
double t56 = t53*t54*t55*1.09E3;
double t57 = t51+t56;
double t58 = r8*t34*t37*t57;
double t59 = r2*t7*t10*t48;
double t60 = t27*t41*1.962E3;
double t61 = t28*(9.0/1.0E1);
double t62 = t61+1.0/1.0E1;
double t63 = t42*t43*t62*1.09E3;
double t64 = t60+t63;
double t65 = r5*t25*t28*t64;
double t66 = t27*t41*2.18E2;
double t67 = t28*(1.0/1.0E1);
double t68 = t67+9.0/1.0E1;
double t69 = t42*t43*t68*1.09E3;
double t70 = t66+t69;
double t71 = r5*t25*t28*t70;
double t72 = t58+t59+t71;
double t73 = r2*t7*t10*t21;
double t74 = t58+t65+t73;
double t75 = t36*t50*2.18E2;
double t76 = t37*(1.0/1.0E1);
double t77 = t76+9.0/1.0E1;
double t78 = t54*t55*t77*1.09E3;
double t79 = t75+t78;
double t80 = r8*t34*t37*t79;
double t81 = t59+t65+t80;
double t82 = r9*t34*t37*t57;
double t83 = r3*t7*t10*t48;
double t84 = r6*t25*t28*t64;
double t85 = r6*t25*t28*t70;
double t86 = t82+t83+t85;
double t87 = r3*t7*t10*t21;
double t88 = t82+t84+t87;
double t89 = r9*t34*t37*t79;
double t90 = t83+t84+t89;
double t91 = t21*t74;
double t92 = t48*t72;
double t93 = t48*t81;
double t94 = t91+t92+t93;
double t95 = t70*t72;
double t96 = t64*t74;
double t97 = t64*t81;
double t98 = t95+t96+t97;
double t99 = t79*t81;
double t100 = t57*t74;
double t101 = t57*t72;
double t102 = t99+t100+t101;
double t103 = t21*t88;
double t104 = t48*t86;
double t105 = t48*t90;
double t106 = t103+t104+t105;
double t107 = t70*t86;
double t108 = t64*t88;
double t109 = t64*t90;
double t110 = t107+t108+t109;
double t111 = t79*t90;
double t112 = t57*t88;
double t113 = t57*t86;
double t114 = t111+t112+t113;
double t115 = 1.0/AUp1;
double t116 = t14*t17*1.09E3;
double t117 = t41*t62*1.09E3;
double t118 = t50*t53*1.09E3;
double t119 = t116+t117+t118+1.9E1;
double t120 = t115*t119;
double t121 = t120-1.0;
double t122 = 1.0/(t8*t8*t8);
double t123 = 1.0/AUp2;
double t124 = t14*t46*1.09E3;
double t125 = t41*t68*1.09E3;
double t126 = t118+t124+t125+1.9E1;
double t127 = t123*t126;
double t128 = t127-1.0;
double t129 = t7*t10*1.8E1;
double t137 = t7*t122*1.8E1;
double t130 = t129-t137;
double t131 = 1.0/AUp3;
double t132 = t50*t77*1.09E3;
double t133 = t117+t124+t132+1.9E1;
double t134 = t131*t133;
double t135 = t134-1.0;
double t136 = t7*t14*t122*1.962E3;
double t138 = t136-t19*t46*t130*1.09E3;
double t139 = r2*t7*t10*t94;
double t140 = r5*t25*t28*t98;
double t141 = r8*t34*t37*t102;
double t142 = t139+t140+t141;
double t143 = r3*t7*t10*t106;
double t144 = r6*t25*t28*t110;
double t145 = r9*t34*t37*t114;
double t146 = t143+t144+t145;
double t147 = t142*t146;
double t148 = r3*t7*t10*t94;
double t149 = r6*t25*t28*t98;
double t150 = r9*t34*t37*t102;
double t151 = t148+t149+t150;
double t152 = r2*t7*t10*t106;
double t153 = r5*t25*t28*t110;
double t154 = r8*t34*t37*t114;
double t155 = t152+t153+t154;
double t156 = t147-t151*t155;
double t157 = fabs(t121);
double t158 = fabs(t128);
double t159 = fabs(t135);
double t160 = 1.0/(t12*t12*t12);
double t161 = t7*t10*t14*1.962E3;
double t162 = t7*t10*t19*t46*1.962E4;
double t163 = t7*t18*t19*t122*1.962E3;
double t169 = t9*t19*t130*1.962E3;
double t170 = t18*t46*t130*t160*2.18E3;
double t164 = t161+t162+t163-t169-t170;
double t165 = t7*t10*t14*2.18E2;
double t166 = t7*t10*t17*t19*1.962E4;
double t167 = t7*t18*t19*t122*2.18E2;
double t176 = t9*t19*t130*2.18E2;
double t177 = t17*t18*t130*t160*2.18E3;
double t168 = t165+t166+t167-t176-t177;
double t171 = r1*2.0;
double t172 = r2*t1*2.0;
double t173 = r3*t2*2.0;
double t174 = t171+t172+t173;
double t175 = exp(t174);
double t178 = r2*t7*t10*t168;
double t179 = r2*t21*t122*t175*2.0;
double t180 = -t73+t178+t179;
double t181 = r2*t7*t10*t164;
double t182 = r2*t48*t122*t175*2.0;
double t183 = -t59+t181+t182;
double t184 = t74*t168;
double t185 = t72*t164;
double t186 = t81*t164;
double t187 = t21*t180;
double t188 = t48*t183*2.0;
double t189 = t184+t185+t186+t187+t188;
double t190 = t64*t180;
double t191 = t70*t183;
double t192 = t64*t183;
double t193 = t190+t191+t192;
double t194 = t57*t180;
double t195 = t79*t183;
double t196 = t57*t183;
double t197 = t194+t195+t196;
double t198 = r3*t7*t10*t168;
double t199 = r3*t21*t122*t175*2.0;
double t200 = -t87+t198+t199;
double t201 = r3*t7*t10*t164;
double t202 = r3*t48*t122*t175*2.0;
double t203 = -t83+t201+t202;
double t204 = t88*t168;
double t205 = t86*t164;
double t206 = t90*t164;
double t207 = t21*t200;
double t208 = t48*t203*2.0;
double t209 = t204+t205+t206+t207+t208;
double t210 = t64*t200;
double t211 = t70*t203;
double t212 = t64*t203;
double t213 = t210+t211+t212;
double t214 = t57*t200;
double t215 = t79*t203;
double t216 = t57*t203;
double t217 = t214+t215+t216;
double t0 = -sqrt(t156)*(t115*t157*((t121/fabs(t121)))*(t7*t14*t122*2.18E2-t17*t19*t130*1.09E3)*2.0+t123*t138*t158*((t128/fabs(t128)))*2.0+t131*t138*t159*((t135/fabs(t135)))*2.0)-1.0/sqrt(t156)*(t157*t157+t158*t158+t159*t159)*(t146*(-t139+r2*t7*t10*t189+r5*t25*t28*t193+r8*t34*t37*t197+r2*t94*t122*t175*2.0)-t155*(-t148+r3*t7*t10*t189+r6*t25*t28*t193+r9*t34*t37*t197+r3*t94*t122*t175*2.0)+t142*(-t143+r3*t7*t10*t209+r6*t25*t28*t213+r9*t34*t37*t217+r3*t106*t122*t175*2.0)-t151*(-t152+r2*t7*t10*t209+r5*t25*t28*t213+r8*t34*t37*t217+r2*t106*t122*t175*2.0))*(1.0/2.0);

return t0;
}

#endif