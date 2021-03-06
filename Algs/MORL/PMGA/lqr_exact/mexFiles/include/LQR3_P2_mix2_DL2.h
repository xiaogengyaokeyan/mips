#ifndef LQR3_P2_mix2_DL2_H
#define LQR3_P2_mix2_DL2_H

double LQR3_P2_mix2_DL2(double* tv, int tdim, double* param, int pdim) {

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

double t4 = r2-3.338299811;
double t5 = t2*t4;
double t6 = r1*t1;
double t7 = t1*t1;
double t8 = t2*t2;
double t12 = r1*t7;
double t13 = r2*t8;
double t14 = r3*t1*t2;
double t9 = t5+t6-t12-t13-t14+1.151035476;
double t10 = exp(t9);
double t11 = t10+1.0;
double t15 = 1.0/(t11*t11);
double t16 = r4-3.338299811;
double t17 = t1*t16;
double t18 = r5*t2;
double t22 = r4*t7;
double t23 = r5*t8;
double t24 = r6*t1*t2;
double t19 = t17+t18-t22-t23-t24+1.151035476;
double t20 = exp(t19);
double t21 = t20+1.0;
double t25 = 1.0/(t21*t21);
double t26 = r7+3.338299811;
double t27 = t1*t26;
double t28 = r8+3.338299811;
double t29 = t2*t28;
double t33 = r7*t7;
double t34 = r8*t8;
double t35 = r9*t1*t2;
double t30 = t27+t29-t33-t34-t35-2.187264336;
double t31 = exp(t30);
double t32 = t31+1.0;
double t36 = 1.0/(t32*t32);
double t38 = 1.0/t11;
double t39 = t38*1.8E1;
double t40 = t15*9.0;
double t41 = t39-t40+1.0;
double t42 = 1.0/t41;
double t43 = 1.0/t21;
double t44 = t43*1.8E1;
double t45 = t25*9.0;
double t46 = t44-t45+1.0;
double t47 = 1.0/t46;
double t48 = t36*(9.0/1.0E1);
double t49 = t48+1.0/1.0E1;
double t50 = 1.0/t32;
double t51 = t50*1.8E1;
double t52 = t36*9.0;
double t53 = t51-t52+1.0;
double t54 = 1.0/t53;
double t55 = t49*t54*1.09E3;
double t60 = t25*(9.0/1.0E1);
double t61 = t60+1.0/1.0E1;
double t62 = t47*t61*1.09E3;
double t65 = t15*(1.0/1.0E1);
double t66 = t65+9.0/1.0E1;
double t67 = t42*t66*1.09E3;
double t68 = t55+t62+t67+1.9E1;
double t97 = 1.0/Up1;
double t98 = t68*t97;
double t99 = t98-1.0;
double t37 = fabs(t99);
double t57 = t15*(9.0/1.0E1);
double t58 = t57+1.0/1.0E1;
double t59 = t42*t58*1.09E3;
double t75 = t25*(1.0/1.0E1);
double t76 = t75+9.0/1.0E1;
double t77 = t47*t76*1.09E3;
double t78 = t55+t59+t77+1.9E1;
double t102 = 1.0/Up2;
double t103 = t78*t102;
double t104 = t103-1.0;
double t56 = fabs(t104);
double t85 = t36*(1.0/1.0E1);
double t86 = t85+9.0/1.0E1;
double t87 = t54*t86*1.09E3;
double t88 = t59+t62+t87+1.9E1;
double t106 = 1.0/Up3;
double t107 = t88*t106;
double t108 = t107-1.0;
double t63 = fabs(t108);
double t64 = 1.0/AUp1;
double t69 = t64*t68;
double t70 = t69-1.0;
double t71 = t2*1.0;
double t72 = 1.0/(t11*t11*t11);
double t73 = t8-t71;
double t74 = 1.0/AUp2;
double t79 = t74*t78;
double t80 = t79-1.0;
double t81 = t10*t15*t73*1.8E1;
double t82 = 1.0/(t41*t41);
double t91 = t10*t72*t73*1.8E1;
double t83 = t81-t91;
double t84 = 1.0/AUp3;
double t89 = t84*t88;
double t90 = t89-1.0;
double t92 = t58*t82*t83*1.09E3;
double t105 = t10*t42*t72*t73*1.962E3;
double t93 = t92-t105;
double t94 = fabs(t70);
double t95 = fabs(t80);
double t96 = fabs(t90);
double t100 = t66*t82*t83*1.09E3;
double t101 = t100-t10*t42*t72*t73*2.18E2;
double t109 = t37*t37;
double t110 = t56*t56;
double t111 = t63*t63;
double t112 = t109+t110+t111;
double t113 = t43*t47*2.18E2;
double t114 = t44-1.8E1;
double t115 = 1.0/(t46*t46);
double t116 = t76*t114*t115*1.09E3;
double t117 = t113+t116;
double t118 = t43*t47*1.962E3;
double t119 = t61*t114*t115*1.09E3;
double t120 = t118+t119;
double t121 = r4*t1*2.0;
double t122 = r6*t2;
double t123 = -r4+t121+t122+3.338299811;
double t124 = t51-1.8E1;
double t125 = 1.0/(t53*t53);
double t139 = r7*t1*2.0;
double t140 = r9*t2;
double t126 = r7-t139-t140+3.338299811;
double t127 = t38*t42*1.962E3;
double t128 = t39-1.8E1;
double t129 = t58*t82*t128*1.09E3;
double t130 = t127+t129;
double t131 = r1*t1*2.0;
double t132 = r3*t2;
double t133 = -r1+t131+t132;
double t134 = t10*t15*t130*t133;
double t135 = t20*t25*t120*t123;
double t136 = t50*t54*1.962E3;
double t137 = t49*t124*t125*1.09E3;
double t138 = t136+t137;
double t141 = t50*t54*2.18E2;
double t142 = t86*t124*t125*1.09E3;
double t143 = t141+t142;
double t153 = t31*t36*t126*t143;
double t144 = t134+t135-t153;
double t145 = t20*t25*t117*t123;
double t147 = t31*t36*t126*t138;
double t146 = t134+t145-t147;
double t148 = t38*t42*2.18E2;
double t149 = t66*t82*t128*1.09E3;
double t150 = t148+t149;
double t151 = t10*t15*t133*t150;
double t152 = t135-t147+t151;
double t154 = r2*t2*2.0;
double t155 = r3*t1;
double t156 = -r2+t154+t155+3.338299811;
double t163 = r8*t2*2.0;
double t164 = r9*t1;
double t157 = r8-t163-t164+3.338299811;
double t158 = r5*t2*2.0;
double t159 = r6*t1;
double t160 = -r5+t158+t159;
double t161 = t20*t25*t120*t160;
double t162 = t10*t15*t130*t156;
double t171 = t31*t36*t143*t157;
double t165 = t161+t162-t171;
double t166 = t10*t15*t150*t156;
double t168 = t31*t36*t138*t157;
double t167 = t161+t166-t168;
double t169 = t20*t25*t117*t160;
double t170 = t162-t168+t169;
double t172 = t150*t152;
double t173 = t130*t146;
double t174 = t130*t144;
double t175 = t172+t173+t174;
double t176 = t143*t144;
double t177 = t138*t146;
double t178 = t138*t152;
double t179 = t176+t177+t178;
double t180 = t117*t146;
double t181 = t120*t144;
double t182 = t117*t170;
double t183 = t120*t167;
double t184 = t120*t165;
double t185 = t182+t183+t184;
double t186 = t143*t165;
double t187 = t138*t167;
double t188 = t138*t170;
double t189 = t186+t187+t188;
double t190 = t150*t167;
double t191 = t130*t165;
double t192 = t120*t152;
double t193 = t180+t181+t192;
double t194 = t130*t170;
double t195 = t190+t191+t194;
double t196 = t20*t25*t123*t193;
double t197 = t10*t15*t133*t175;
double t215 = t31*t36*t126*t179;
double t198 = t196+t197-t215;
double t199 = t10*t15*t156*t195;
double t200 = t20*t25*t160*t185;
double t271 = t31*t36*t157*t189;
double t201 = t199+t200-t271;
double t202 = t198*t201;
double t203 = t10*t15*t156*t175;
double t204 = t20*t25*t160*t193;
double t247 = t31*t36*t157*t179;
double t205 = t203+t204-t247;
double t206 = t20*t25*t123*t185;
double t207 = t10*t15*t133*t195;
double t262 = t31*t36*t126*t189;
double t208 = t206+t207-t262;
double t209 = t202-t205*t208;
double t210 = t94*t94;
double t211 = t95*t95;
double t212 = t96*t96;
double t213 = t210+t211+t212;
double t214 = 1.0/t112;
double t216 = t2*2.0;
double t217 = t216-1.0;
double t218 = 1.0/(t41*t41*t41);
double t219 = t2*t4*2.0;
double t228 = r1*t7*2.0;
double t229 = r2*t8*2.0;
double t230 = r3*t1*t2*2.0;
double t220 = t131+t219-t228-t229-t230+2.302070952;
double t221 = exp(t220);
double t222 = t10*t15*t42*t73*1.962E3;
double t223 = t10*t15*t58*t73*t82*1.962E4;
double t224 = t10*t72*t73*t82*t128*1.962E3;
double t237 = t38*t82*t83*1.962E3;
double t238 = t58*t83*t128*t218*2.18E3;
double t225 = t222+t223+t224-t237-t238;
double t226 = t10*t15*t156*t225;
double t227 = t10*t15*t130*t217;
double t231 = t72*t73*t130*t156*t221*2.0;
double t245 = t10*t15*t73*t130*t156;
double t232 = t226+t227+t231-t245;
double t233 = t10*t15*t42*t73*2.18E2;
double t234 = t10*t15*t66*t73*t82*1.962E4;
double t235 = t10*t72*t73*t82*t128*2.18E2;
double t239 = t38*t82*t83*2.18E2;
double t240 = t66*t83*t128*t218*2.18E3;
double t236 = t233+t234+t235-t239-t240;
double t241 = t10*t15*t156*t236;
double t242 = t10*t15*t150*t217;
double t243 = t72*t73*t150*t156*t221*2.0;
double t246 = t10*t15*t73*t150*t156;
double t244 = t241+t242+t243-t246;
double t248 = t167*t236;
double t249 = t165*t225;
double t250 = t170*t225;
double t251 = t150*t244;
double t252 = t130*t232*2.0;
double t253 = t248+t249+t250+t251+t252;
double t254 = t120*t244;
double t255 = t117*t232;
double t256 = t120*t232;
double t257 = t254+t255+t256;
double t258 = t138*t244;
double t259 = t143*t232;
double t260 = t138*t232;
double t261 = t258+t259+t260;
double t263 = t10*t15*t133*t236;
double t264 = t72*t73*t133*t150*t221*2.0;
double t270 = t10*t15*t73*t133*t150;
double t265 = t263+t264-t270;
double t266 = t10*t15*t133*t225;
double t267 = t72*t73*t130*t133*t221*2.0;
double t269 = t10*t15*t73*t130*t133;
double t268 = t266+t267-t269;
double t272 = t120*t265;
double t273 = t117*t268;
double t274 = t120*t268;
double t275 = t272+t273+t274;
double t276 = t152*t236;
double t277 = t146*t225;
double t278 = t144*t225;
double t279 = t150*t265;
double t280 = t130*t268*2.0;
double t281 = t276+t277+t278+t279+t280;
double t282 = t138*t265;
double t283 = t143*t268;
double t284 = t138*t268;
double t0 = -sqrt(t209)*(beta1*t214*(t64*t94*t101*((t70/fabs(t70)))*2.0+t74*t93*t95*((t80/fabs(t80)))*2.0+t84*t93*t96*((t90/fabs(t90)))*2.0)-beta1*1.0/(t112*t112)*t213*(t37*t97*t101*((t99/fabs(t99)))*2.0+t56*t93*t102*((t104/fabs(t104)))*2.0+t63*t93*t106*((t108/fabs(t108)))*2.0))+1.0/sqrt(t209)*(beta2-beta1*t213*t214)*(t205*(t10*t15*t133*t253+t20*t25*t123*t257-t31*t36*t126*t261-t10*t15*t73*t133*t195+t72*t73*t133*t195*t221*2.0)-t198*(t10*t15*t156*t253+t10*t15*t195*t217+t20*t25*t160*t257-t31*t36*t157*t261-t10*t15*t73*t156*t195+t72*t156*t195*t221*(t8-t71)*2.0)+t208*(t10*t15*t175*t217+t10*t15*t156*t281+t20*t25*t160*t275-t31*t36*t157*(t282+t283+t284)-t10*t15*t73*t156*t175+t72*t73*t156*t175*t221*2.0)-t201*(t10*t15*t133*t281+t20*t25*t123*t275-t31*t36*t126*(t282+t283+t284)+t72*t73*t133*t175*t221*2.0-t10*t15*t133*t175*(t8-t71)))*(1.0/2.0);

return t0;
}

#endif