#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<5> Local_80 = { 0, 0, 0, 0, 0 } ;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 21;
	var uLocal_84 = 6;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91[4] = { 0, 0, 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96[5] = { 0, 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99[2] = { 0, 0 };
	int iLocal_100[2] = { 0, 0 };
	int iLocal_101[2] = { 0, 0 };
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	vector3 vLocal_116[15] = {{ 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f } };
	int iLocal_117 = 0;
	vector3 vLocal_118 = { 0f, 0f, 0f };
	vector3 vLocal_119 = { 0f, 0f, 0f };
	vector3 vLocal_120 = { 0f, 0f, 0f };
	float fLocal_121 = 0f;
	vector3 vLocal_122 = { 0f, 0f, 0f };
	float fLocal_123 = 0f;
	vector3 vLocal_124 = { 0f, 0f, 0f };
	float fLocal_125 = 0f;
	vector3 vLocal_126 = { 0f, 0f, 0f };
	float fLocal_127 = 0f;
	vector3 vLocal_128 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	float fLocal_130 = 0f;
	vector3 vLocal_131 = { 0f, 0f, 0f };
	float fLocal_132 = 0f;
	vector3 vLocal_133 = { 0f, 0f, 0f };
	vector3 vLocal_134 = { 0f, 0f, 0f };
	float fLocal_135 = 0f;
	vector3 vLocal_136 = { 0f, 0f, 0f };
	vector3 vLocal_137 = { 0f, 0f, 0f };
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	vector3 vLocal_140 = { 0f, 0f, 0f };
	vector3 vLocal_141 = { 0f, 0f, 0f };
	float fLocal_142 = 0f;
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	float fLocal_145 = 0f;
	vector3 vLocal_146 = { 0f, 0f, 0f };
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = 0;
	int iLocal_155 = 0;
	char* sLocal_156 = NULL;
	char* sLocal_157 = NULL;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = 0;
	bool bLocal_175 = 0;
	bool bLocal_176 = 0;
	bool bLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	bool bLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	bool bLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	char* sLocal_201 = NULL;
	char[] cLocal_202[8] = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	vector3 vLocal_209 = { 0f, 0f, 0f };
	vector3 vLocal_210 = { 0f, 0f, 0f };
	vector3 vLocal_211 = { 0f, 0f, 0f };
	float fLocal_212 = 0f;
	var uLocal_213 = 100;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	vector3 vLocal_514 = { 0f, 0f, 0f };
	vector3 vLocal_515 = { 0f, 0f, 0f };
	vector3 vLocal_516 = { 0f, 0f, 0f };
	float fLocal_517 = 0f;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	struct<2> Local_543 = { 0, 0 } ;
	struct<2> Local_544 = { 0, 0 } ;
	struct<2> Local_545 = { 0, 0 } ;
	struct<2> Local_546 = { 0, 0 } ;
	int iLocal_547 = 0;
	char[] cLocal_548[8] = 0;
	struct<10> Local_549[16];
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	struct<6> Local_556 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	struct<7> Local_561[2];
	int iLocal_562[2] = { 0, 0 };
	int iLocal_563[2] = { 0, 0 };
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	float fLocal_570 = 0f;
	int iLocal_571 = 0;
	struct<8> Local_572[2];
	float fLocal_573 = 0f;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	float fLocal_598 = 0f;
	float fLocal_599 = 0f;
	float fLocal_600 = 0f;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	vector3 vLocal_603[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	bool bLocal_607 = 0;
	vector3 vLocal_608 = { 0f, 0f, 0f };
	float fLocal_609 = 0f;
	char* sLocal_610[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614[3] = { 0, 0, 0 };
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	bool bLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	float fLocal_626 = 0f;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	float fLocal_631 = 0f;
	vector3 vLocal_632[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_633[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_634[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_635[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_636[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_637[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_638[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_639[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_640 = 4;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 4;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 15;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 15;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 8;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 8;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	struct<25> Local_808[2];
	var uLocal_809 = 8;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 6;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 6;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	int iLocal_872[2] = { 0, 0 };
	bool bLocal_873 = 0;
	int iLocal_874[2] = { 0, 0 };
	int iLocal_875[2] = { 0, 0 };
	int iLocal_876 = 0;
	bool bLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880[2] = { 0, 0 };
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	float fLocal_886 = 0f;
	float fLocal_887 = 0f;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	bool bLocal_890 = 0;
	float fLocal_891 = 0f;
	int iLocal_892 = 0;
	float fLocal_893[2] = { 0f, 0f };
	bool bLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	var uLocal_898 = 0;
	bool bLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	bool bLocal_902 = 0;
	float fLocal_903 = 0f;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0,001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	uLocal_68 = unk_0x5354F72E0D8D7E53();
	iLocal_69 = unk_0x526A9A6B1B39C5F0();
	iLocal_70 = -1;
	iLocal_78 = 6;
	vLocal_118 = { -1614,526f, -1137,882f, 0,9178f };
	vLocal_119 = { -1626,046f, -1137,165f, 0,47598f };
	vLocal_120 = { -805,4391f, 175,644f, 75,7407f };
	fLocal_121 = 336,1657f;
	vLocal_122 = { -804,3638f, 178,5257f, 75,7407f };
	fLocal_123 = 14,3431f;
	vLocal_124 = { -1862,529f, -1211,253f, 12,017f };
	fLocal_125 = 45,6064f;
	vLocal_126 = { -823,2707f, 181,5663f, 70,6967f };
	fLocal_127 = 136,7262f;
	vLocal_128 = { -2019,921f, -1030,525f, 0,001f };
	vLocal_129 = { -2008,722f, -1033,154f, 0f };
	fLocal_130 = 280,6858f;
	vLocal_131 = { -1072,8f, -1703,924f, 3,514f };
	fLocal_132 = 181,9476f;
	vLocal_133 = { -1105,932f, -1695,893f, 3,3731f };
	vLocal_134 = { -1106,255f, -1694,977f, 3,3742f };
	fLocal_135 = 122,5477f;
	vLocal_136 = { -1866,951f, -1208,529f, 12,63051f };
	vLocal_137 = { -1865,153f, -1210,694f, 12,60679f };
	fLocal_138 = 54,5399f;
	fLocal_139 = 65,01204f;
	vLocal_140 = { -1627,998f, -1143,906f, -0,612126f };
	vLocal_141 = { -1608,71f, -1116,125f, 7,893201f };
	fLocal_142 = 45f;
	vLocal_143 = { -1084,216f, -1707,052f, -6,638385f };
	vLocal_144 = { -967,2344f, -1829,366f, 40,31441f };
	fLocal_145 = 116f;
	vLocal_146 = { -1851,92f, -1217,777f, 12,01752f };
	fLocal_147 = 332,3918f;
	fLocal_148 = 113,3809f;
	fLocal_149 = -107,7502f;
	bLocal_154 = true;
	sLocal_156 = "fam2";
	sLocal_157 = "fam2stairs";
	iLocal_158 = 2;
	iLocal_164 = 4;
	iLocal_165 = 4;
	iLocal_166 = 1;
	iLocal_168 = -1;
	iLocal_169 = -1;
	iLocal_170 = -1;
	iLocal_171 = 900;
	bLocal_174 = true;
	sLocal_201 = "family_2_mcs_4";
	cLocal_202 = "FAM2AUD";
	vLocal_209 = { -2030,409f, -1039,463f, -23,59287f };
	vLocal_210 = { -1797,853f, -982,6022f, 0f };
	vLocal_211 = { -934,5598f, -1360,544f, 0f };
	fLocal_212 = 288,2051f;
	vLocal_514 = { -816,716f, 179,098f, 72,8274f };
	vLocal_515 = { -816,1068f, 177,5108f, 72,8274f };
	cLocal_548 = cLocal_202;
	StringCopy(&Local_556, "", 24);
	iLocal_602 = -1;
	fLocal_631 = 0f;
	fLocal_887 = 0f;
	fLocal_891 = 0f;
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_577(3);
		func_575();
		unk_0x8810DC630928B398("FAM2_STOP");
		func_573();
	}
	unk_0xBC03901A15107317(1);
	func_535();
	func_534(0, 1);
	iLocal_907 = 0;
	while (true)
	{
		if (!iLocal_173)
		{
			func_531();
		}
		if (!iLocal_172)
		{
			func_465();
		}
		func_462();
		func_459();
		unk_0x48D75120C879E65E("M_DaddysLittleGirl", 0);
		switch (iLocal_70)
		{
			case -1:
				if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), 1f);
				}
				switch (iLocal_159)
				{
					case 0:
						if (!unk_0x6ADD12BF4D6D2587(iLocal_89))
						{
							if (!unk_0x6ADD12BF4D6D2587(Global_89475.f_9[0]))
							{
								func_458(-808,0422f, 168,5755f, 75,7504f, 244,0649f);
							}
							else
							{
								unk_0xDD29FF4BAB8AFF9C(Global_89475.f_9[0], true, 1);
								iLocal_89 = Global_89475.f_9[0];
							}
						}
						if (!unk_0x2C2E1E35924B9FF2(iLocal_113))
						{
							iLocal_113 = unk_0xD3BB1A515B0A47F3(-813,1963f, 179,4912f, 71,1592f);
						}
						unk_0x6450931B826B49D9("missfam2mcs_intp1");
						unk_0x307EAE14C924E2E7(sLocal_157);
						unk_0x6FF834D85E2DD4C6(joaat("v_ilev_mm_doorm_l"));
						unk_0x6FF834D85E2DD4C6(joaat("v_ilev_mm_doorm_r"));
						unk_0xBCBC53983EC3B1BA("FAMILY2", 0);
						unk_0xBCBC53983EC3B1BA(cLocal_202, 6);
						if (!iLocal_907)
						{
							unk_0xABEF7F0F7ED126F3("family_2_Timelapse_srl");
							iLocal_907 = 1;
						}
						if ((((((((((unk_0x1A595E6882473810(iLocal_113) && unk_0x3A801AA34DD821BE("missfam2mcs_intp1")) && unk_0x6ADD12BF4D6D2587(iLocal_89)) && unk_0x56A9DDE5521F38CB("TIME_LAPSE", 0, -1)) && unk_0x6ADD12BF4D6D2587(iLocal_89)) && unk_0x9A0B2ED5055D3F0B(joaat("v_ilev_mm_doorm_l"))) && unk_0x9A0B2ED5055D3F0B(joaat("v_ilev_mm_doorm_r"))) && unk_0xC316B5E3E7ACF515(sLocal_157)) && unk_0xE48C631281D64F7F()) && unk_0x9F0887BCBFCF3C2F(0)) && unk_0x9F0887BCBFCF3C2F(6))
						{
							unk_0x391612227A0274F1();
							unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
							iLocal_906 = unk_0x8383F9C605E523B7(-817,311f, 179,33f, 71,241f, 0f, 0f, -113f, 2);
							unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_906, "missfam2mcs_intp1", "fam_2_int_p1_michael", 1000f, -1000f, 8, 0, 1148846080, 0);
							unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
							if (unk_0x546F10CBA6C484DA(-2097039789))
							{
								unk_0x99B6EAC23065A02E(-2097039789, 1f, 0, 0);
								unk_0xB94AAB49E0BB01DB(-2097039789, 1, 0, 1);
							}
							if (unk_0x546F10CBA6C484DA(-2127416656))
							{
								unk_0x99B6EAC23065A02E(-2127416656, -1f, 0, 0);
								unk_0xB94AAB49E0BB01DB(-2127416656, 1, 0, 1);
							}
							unk_0xA25B44929E552182(vLocal_514, 1f, joaat("v_ilev_mm_doorm_l"), 0);
							unk_0xA25B44929E552182(vLocal_515, 1f, joaat("v_ilev_mm_doorm_r"), 0);
							iLocal_109 = unk_0x5E35CF35E65D69B9(joaat("v_ilev_mm_doorm_l"), vLocal_514, 1, true, 0);
							iLocal_110 = unk_0x5E35CF35E65D69B9(joaat("v_ilev_mm_doorm_r"), vLocal_515, 1, true, 0);
							unk_0xEBB74134CCA3442E(iLocal_109, iLocal_906, "fam_2_int_p1_doorl", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
							unk_0xEBB74134CCA3442E(iLocal_110, iLocal_906, "fam_2_int_p1_doorr", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
							unk_0x753D9A01DBBC17B5(iLocal_109);
							unk_0x753D9A01DBBC17B5(iLocal_110);
							unk_0x4779448854314440(0);
							iLocal_111 = unk_0x03F9D5EC835EE606(964613260, 1);
							unk_0xEFF56C7BDABBF39B(iLocal_111, iLocal_906, "fam_2_int_p1_cam", "missfam2mcs_intp1");
							unk_0xF0E859A5278D3AA0(true, 0);
							unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
							func_457(18);
							unk_0x64360FBB0CD3420D(5, 5, 5, 5);
							unk_0x0FEA4EBF2224FFAE();
							system::settimera(0);
							unk_0x14776E43F90DD454(joaat("v_ilev_mm_doorm_l"));
							unk_0x14776E43F90DD454(joaat("v_ilev_mm_doorm_r"));
							func_455(unk_0xFC1458A37D98B502(), 32);
							unk_0x797EAF57A872C68A(unk_0xFC1458A37D98B502(), 3, 17, 0);
							unk_0x797EAF57A872C68A(unk_0xFC1458A37D98B502(), 4, 16, 0);
							unk_0x797EAF57A872C68A(unk_0xFC1458A37D98B502(), 6, 1, 0);
							unk_0x6EC874A9FE87276C(unk_0xFC1458A37D98B502(), 1);
							if (unk_0x6ADD12BF4D6D2587(unk_0xC733212BF9066BDF()))
							{
								if (func_454(unk_0xC733212BF9066BDF()))
								{
									iVar0 = 0;
									while (iVar0 < 3)
									{
										if (unk_0x6ADD12BF4D6D2587(Global_90339[iVar0]))
										{
											if (system::vdist2(unk_0xB3328BA8976B416C(Global_90339[iVar0], 1), vLocal_126) < 900f)
											{
												unk_0xDD29FF4BAB8AFF9C(Global_90339[iVar0], true, 1);
												unk_0xC91FE17AD7353B70(&(Global_90339[iVar0]));
												iVar0 = 3;
											}
										}
										iVar0++;
									}
								}
							}
							func_450(vLocal_122, 1000f, 0);
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								iVar1 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
							}
							else
							{
								iVar1 = unk_0x4E7809A068F46A31();
							}
							if (unk_0x6ADD12BF4D6D2587(iVar1) && unk_0xB8DE76287EDC4957(iVar1, 0))
							{
								if (!unk_0xB0DA749C8A7CCBBF(iVar1, joaat("taxi")) && !func_448(iVar1, 0, 1))
								{
									if (func_447(iVar1) && system::vdist(unk_0xB3328BA8976B416C(iVar1, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 50f)
									{
										unk_0xDD29FF4BAB8AFF9C(iVar1, true, 1);
										if (func_446(iVar1) == 0)
										{
											unk_0xC91FE17AD7353B70(&iVar1);
										}
										else
										{
											func_435(iVar1, -822,4229f, 157,8134f, 69,0913f, 91,16499f, 24, 0);
											unk_0xBD8D47FDC6902B2D(iVar1, -822,4229f, 157,8134f, 69,0913f, 1, false, 0, 1);
											unk_0x48ED7B2293A96722(iVar1, 91,16499f);
											unk_0x6147908AB85766AA(iVar1, 1);
										}
									}
								}
							}
							unk_0x247EAA2E93D4A021(vLocal_126, 200f, 1, 0, 0, false);
							func_434(24);
							unk_0x49779D62887BC4A2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 300f);
							unk_0x2A3035DE2B139D39(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 300f);
							unk_0x59E44AF726705D19(unk_0xFC1458A37D98B502(), 1);
							iLocal_159++;
						}
						break;
					
					case 1:
						unk_0x391612227A0274F1();
						unk_0x7CCAEEBB35C9B8E7(system::to_float(system::timera()));
						if (func_433(1000))
						{
							func_432(500);
							iLocal_159 += 2;
						}
						if ((unk_0xD56F740235B1E8F0(iLocal_906) && unk_0x463C4747B41E35A3(iLocal_906) > 0,95f) || !unk_0xD56F740235B1E8F0(iLocal_906))
						{
							iLocal_906 = -1;
							Local_80.f_4 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", false);
							unk_0xD2EF93491605005F(Local_80.f_4, -835,1494f, 180,1434f, 71,9064f, 12,6567f, 0f, -102,44f, 5000, 3, 2);
							unk_0xD2EF93491605005F(Local_80.f_4, -835,7494f, 180,2434f, 71,9064f, 12,6567f, 0f, -102,44f, 5000, 3, 2);
							unk_0xE43C573FE3C5D758(Local_80.f_4, 47,9931f);
							unk_0x7849794435F39D49(Local_80.f_4, true);
							unk_0x4AFBCBFDE748D4E0(-1, "TIME_LAPSE_MASTER", 0, 1);
							func_431(&Local_80, 1, 0, 2000, 1, 1, 0, 1);
							unk_0x7849794435F39D49(iLocal_111, false);
							iLocal_905 = 10;
							unk_0x59E44AF726705D19(unk_0xFC1458A37D98B502(), 0);
							iLocal_159++;
						}
						break;
					
					case 2:
						unk_0x391612227A0274F1();
						unk_0x7CCAEEBB35C9B8E7(system::to_float(system::timera()));
						if (func_400(iLocal_905, 0, "EXTRASUNNY", "cirrocumulus", &Local_80, -1082130432, 0, 1, 1065353216))
						{
							unk_0x398C1EF72877869E();
							system::settimera(0);
							iLocal_159++;
						}
						if (func_399())
						{
							func_431(&Local_80, 0, 0, 2000, 1, 1, 0, 1);
							system::wait(0);
							func_432(500);
							iLocal_159++;
						}
						break;
					
					case 3:
						unk_0x391612227A0274F1();
						if ((system::timera() > 300 && unk_0xE2C8F7DB3CF678AC(unk_0xFC1458A37D98B502())) && unk_0xC316B5E3E7ACF515("fam2Stairs"))
						{
							func_370(0, 0);
							if (unk_0x6ADD12BF4D6D2587(iLocal_89))
							{
								unk_0xB3A8974D2C811672(iLocal_89, true, 0);
								unk_0xB18E1DBC397238E1(iLocal_89, true, 0);
								unk_0xEDC33A771FAEB393(iLocal_89, false);
							}
							unk_0x7FF44F2CA1AA5702(10, 0, 0);
							iLocal_159++;
						}
						break;
					
					case 4:
						unk_0x391612227A0274F1();
						iLocal_159 = 0;
						iLocal_70 = 0;
						break;
				}
				break;
			
			case 0:
				func_359();
				break;
			
			case 1:
				func_310();
				break;
			
			case 2:
				func_277();
				break;
			
			case 3:
				func_268();
				break;
			
			case 4:
				func_266();
				break;
			
			case 5:
				func_255();
				break;
			
			case 6:
				func_253();
				break;
			
			case 7:
				func_215();
				func_212();
				break;
			
			case 8:
				func_194();
				break;
			
			case 9:
				func_172();
				break;
			
			case 11:
				func_146();
				break;
			
			default:
				break;
		}
		func_145();
		if (unk_0xB8DE76287EDC4957(iLocal_95, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_89))
		{
			if (unk_0xA8D0477084E86A92(iLocal_89, iLocal_95, 0))
			{
				unk_0xEB2D96E7D3F4906C(iLocal_89, 0);
			}
		}
		func_143(0);
		func_100();
		func_1();
		if (unk_0x6ADD12BF4D6D2587(iLocal_89) && !unk_0x3AB6A1A9084FB0A4(iLocal_89))
		{
			unk_0x2217C45231E6A537(iLocal_89, 328, true);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_88) && !unk_0x3AB6A1A9084FB0A4(iLocal_88))
		{
			unk_0x2217C45231E6A537(iLocal_88, 328, true);
		}
		if (iLocal_152)
		{
			iLocal_152 = 0;
		}
		if (iLocal_153)
		{
			iLocal_153 = 0;
		}
		system::wait(0);
	}
}

void func_1()//Position - 0xB6E
{
	int iVar0;
	bool bVar1;
	
	switch (iLocal_567)
	{
		case 0:
			if (iLocal_70 == 5 && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -2033,821f, -1031,864f, 4,89f) < 62500f)
			{
				unk_0x6FF834D85E2DD4C6(joaat("csb_porndudes"));
				unk_0x6FF834D85E2DD4C6(joaat("a_f_y_beach_01"));
				unk_0x6450931B826B49D9("missfam2leadinoutmcs3");
				if (((unk_0x9A0B2ED5055D3F0B(joaat("csb_porndudes")) && unk_0x9A0B2ED5055D3F0B(joaat("a_f_y_beach_01"))) && unk_0x3A801AA34DD821BE("missfam2leadinoutmcs3")) && func_95(-2033,23f, -1032,27f, 4,89f, 0f))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
					{
						iLocal_91[0] = unk_0xAC992EFAD62C33BF(26, joaat("csb_porndudes"), -2032,69f, -1031,36f, 5,59f, 0f, 1, true);
						unk_0xC820D40994BFF79C(iLocal_91[0], 1,75f);
						iLocal_91[1] = unk_0xAC992EFAD62C33BF(26, joaat("csb_porndudes"), -2034,42f, -1032,71f, 5,54f, 0f, 1, true);
						iLocal_91[2] = unk_0xAC992EFAD62C33BF(26, joaat("a_f_y_beach_01"), -2033,32f, -1031,07f, 5,54f, 0f, 1, true);
						iLocal_91[3] = unk_0xAC992EFAD62C33BF(26, joaat("a_f_y_beach_01"), -2034,48f, -1031,6f, 5,48f, 0f, 1, true);
						iLocal_568 = unk_0x8383F9C605E523B7(-2033,821f, -1031,864f, 4,89f, 0f, 0f, -4,4f, 2);
						unk_0x8E628F774C748D93(iLocal_91[0], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_pornguy_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x8E628F774C748D93(iLocal_91[1], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_pornguy_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x8E628F774C748D93(iLocal_91[2], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_porngal_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x8E628F774C748D93(iLocal_91[3], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_porngal_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x8E628F774C748D93(iLocal_88, iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_tracy", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x03924C68EFCBC511(iLocal_91[0], 0, 0, 0, 0);
						unk_0x03924C68EFCBC511(iLocal_91[0], 3, 0, 0, 0);
						unk_0x03924C68EFCBC511(iLocal_91[0], 4, 0, 0, 0);
						unk_0x0B652E456D6A7E32(iLocal_91[0], 1, 0, 0, false);
						unk_0x03924C68EFCBC511(iLocal_91[1], 0, 2, 0, 0);
						unk_0x03924C68EFCBC511(iLocal_91[1], 3, 2, 0, 0);
						unk_0x03924C68EFCBC511(iLocal_91[1], 4, 2, 0, 0);
						unk_0x0B652E456D6A7E32(iLocal_91[1], 0, 0, 0, false);
						unk_0xD0E12C501EE26329(iLocal_568, 1);
						unk_0x14776E43F90DD454(joaat("csb_porndudes"));
						unk_0x14776E43F90DD454(joaat("a_f_y_beach_01"));
						unk_0x14776E43F90DD454(joaat("ig_tracydisanto"));
						iLocal_567++;
					}
				}
			}
			break;
		
		case 1:
			func_94("family_2_mcs_3", -2033,821f, -1031,864f, 4,89f, 100f, &iLocal_178);
			if (iLocal_178)
			{
				if (unk_0x8AD07B6FC24F47C4())
				{
					unk_0x0D9525F20FB71C52(1, "famtwoplayer");
					func_2("Michael", unk_0xFC1458A37D98B502(), 0, 2);
					if (unk_0x6ADD12BF4D6D2587(iLocal_91[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[0]))
					{
						func_2("Guy_on_sofa", iLocal_91[0], 0, 2);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_91[1]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[1]))
					{
						func_2("Man_getting_wood", iLocal_91[1], 0, 2);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_91[2]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[2]))
					{
						func_2("Girl_on_sofa", iLocal_91[2], 0, 2);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_91[3]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[3]))
					{
						func_2("Girl_being_chatted_up", iLocal_91[3], 0, 2);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_88) && !unk_0x3AB6A1A9084FB0A4(iLocal_88))
					{
						func_2("Tracy", iLocal_88, 0, 2);
					}
				}
			}
			if (iLocal_178)
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -2033,821f, -1031,864f, 4,89f) > (120f * 120f))
				{
					iLocal_178 = 0;
					unk_0xA6C03E3E2533F8F3();
				}
			}
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -2033,821f, -1031,864f, 4,89f) > 75625f || (iLocal_70 != 5 && iLocal_70 != 6))
			{
				if (iLocal_70 != 6)
				{
					bVar1 = true;
					iVar0 = 0;
					while (iVar0 < iLocal_91)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_91[iVar0]))
						{
							if (!unk_0xEC211A86AB3726B6(iLocal_91[iVar0]))
							{
								bVar1 = false;
							}
						}
						iVar0++;
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
					{
						if (!unk_0xEC211A86AB3726B6(iLocal_88))
						{
							bVar1 = false;
						}
					}
					if (bVar1)
					{
						iVar0 = 0;
						while (iVar0 < iLocal_91)
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_91[iVar0]))
							{
								unk_0x957CEE967C939968(iLocal_91[iVar0]);
								unk_0x68433819717660CF(&(iLocal_91[iVar0]));
							}
							iVar0++;
						}
					}
					iLocal_567 = 0;
				}
			}
			break;
	}
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1030
{
	struct<50> Var0;
	int iVar1;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_3(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		unk_0xEDB61F1ADC509416(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			unk_0x7B9E2A8E7B7BA218(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			unk_0x7B9E2A8E7B7BA218(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_3(int iParam0, var uParam1, int iParam2)//Position - 0x10EB
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = unk_0x82FF3DFBC3965CC0(iParam0);
	func_87(iParam0, &Var2, 0);
	func_87(iParam0, uParam1, iParam2);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (func_84(iVar4, func_86(iVar0), func_85(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_86(iVar0)), &iVar1))
			{
				Var3 = { func_14(iVar4, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_12(iVar4, func_86(iVar0), func_85(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_86(iVar0)), &iVar1))
			{
				Var3 = { func_14(iVar4, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (func_84(iVar4, 14, func_5(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_14(iVar4, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_12(iVar4, 14, func_5(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_14(iVar4, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = func_85(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = func_85(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = func_4(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { func_14(iVar4, 0, iVar9) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_4(int iParam0, int iParam1, int iParam2)//Position - 0x1359
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

int func_5(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_11(iParam3);
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	iVar1 = unk_0xA2FAB7A15B84DCA2(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_7(unk_0x82FF3DFBC3965CC0(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_7(unk_0x82FF3DFBC3965CC0(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x52913C7C981BE317(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x34221E435D75D46F(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_6(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_11(iParam3);
}

int func_6(int iParam0, int iParam1)//Position - 0x15AC
{
	int iVar0;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_7(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16EA
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var0);
		iVar2 = 0;
		iVar3 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			unk_0x53CE22B0EDFAB540(iVar1, &Var0);
			if (!unk_0x42683C90F2D005ED(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_10(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var4);
		iVar6 = 0;
		iVar7 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 0, -1, func_9(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			unk_0x19002A6D4CBCE1E2(iVar5, &Var4);
			if (!unk_0x42683C90F2D005ED(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_8(iParam0, func_9(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_8(int iParam0, int iParam1)//Position - 0x17CA
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_9(int iParam0)//Position - 0x1B71
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x1C21
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_11(int iParam0)//Position - 0x1C82
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1D08
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_13(iParam0);
		Global_104555.f_2353.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_104555.f_2353.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_13(int iParam0)//Position - 0x1F92
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

struct<14> func_14(int iParam0, int iParam1, int iParam2)//Position - 0x1FCD
{
	func_83();
	if (iParam0 == joaat("player_zero"))
	{
		func_65(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_46(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_15(iParam1, iParam2);
	}
	return Global_70671[0 /*14*/];
}

void func_15(int iParam0, int iParam1)//Position - 0x201F
{
	switch (iParam0)
	{
		case 0:
			func_45(iParam1);
			break;
		
		case 2:
			func_44(iParam1);
			break;
		
		case 3:
			func_41(iParam1);
			break;
		
		case 4:
			func_40(iParam1);
			break;
		
		case 6:
			func_39(iParam1);
			break;
		
		case 5:
			func_38(iParam1);
			break;
		
		case 8:
			func_37(iParam1);
			break;
		
		case 9:
			func_36(iParam1);
			break;
		
		case 10:
			func_35(iParam1);
			break;
		
		case 1:
			func_34(iParam1);
			break;
		
		case 7:
			func_33(iParam1);
			break;
		
		case 11:
			func_32(iParam1);
			break;
		
		case 12:
			func_31(iParam1);
			break;
		
		case 13:
			func_30(iParam1);
			break;
		
		case 14:
			func_16(iParam1);
			break;
	}
}

void func_16(int iParam0)//Position - 0x210F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 155);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3385
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_28(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x8B948C59217A295D(sParam3) != unk_0x8B948C59217A295D("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 5);
		}
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 6);
		if (func_27(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x6C297174CFC8C5B2(Global_2621444, 1827025211, 0))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_25(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_25(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_25(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_25(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_25(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_25(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 5);
		if (func_24(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
		}
		if (func_24(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
		if (!func_24(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_27(14))
			{
				return;
			}
			iVar0 = func_20(func_23(iParam1, uParam0->f_2), Global_70668, 0);
			if (unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			}
			iVar0 = func_20(func_19(iParam1, uParam0->f_2), Global_70668, 0);
			if (unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
			}
			if (func_18(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_20(iVar1, Global_70668, 0);
				if (!unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
	}
}

bool func_18(int iParam0, int iParam1, var uParam2)//Position - 0x3716
{
	*uParam2 = 975;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 976;
					break;
				
				case 3:
					*uParam2 = 1426;
					break;
				
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 9:
					*uParam2 = 1435;
					break;
				
				case 10:
					*uParam2 = 1437;
					break;
				
				case 1:
					*uParam2 = 1008;
					break;
				
				case 7:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
				
				case 12:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 977;
					break;
				
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 9:
					*uParam2 = 1436;
					break;
				
				case 7:
					*uParam2 = 1439;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 978;
					break;
				
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 7:
					*uParam2 = 1440;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	}
	return *uParam2 != 975;
}

int func_19(int iParam0, int iParam1)//Position - 0x3B1B
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 924;
					break;
				
				case 3:
					return 1411;
					break;
				
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 9:
					return 1420;
					break;
				
				case 10:
					return 1422;
					break;
				
				case 1:
					return 956;
					break;
				
				case 7:
					return 1423;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
				
				case 12:
					return 975;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 925;
					break;
				
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 9:
					return 1421;
					break;
				
				case 7:
					return 1424;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 926;
					break;
				
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 7:
					return 1425;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 973;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 974;
					break;
			}
			break;
	}
	return 932;
}

int func_20(int iParam0, int iParam1, int iParam2)//Position - 0x3F16
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_21(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_21(var uParam0)//Position - 0x3F48
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

int func_22()//Position - 0x3F7C
{
	return Global_1312736;
}

int func_23(int iParam0, int iParam1)//Position - 0x3F88
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 872;
					break;
				
				case 3:
					return 1396;
					break;
				
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 9:
					return 1405;
					break;
				
				case 10:
					return 1407;
					break;
				
				case 1:
					return 904;
					break;
				
				case 7:
					return 1408;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
				
				case 12:
					return 923;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 873;
					break;
				
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 9:
					return 1406;
					break;
				
				case 7:
					return 1409;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 874;
					break;
				
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 7:
					return 1410;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 921;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 922;
					break;
			}
			break;
	}
	return 880;
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x43AB
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x52C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_70668;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_26(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_20(iVar2, iVar0, 0);
		return unk_0xC80D31E4B587871C(iVar3, iVar1);
	}
	return 0;
}

bool func_26(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x530B
{
	int iVar0;
	
	*uParam2 = 7872;
	if ((bParam4 && Global_4264612) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 932;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 932;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 932;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 932;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 932;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 932;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 932;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 932;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 932;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4264612)
		{
			iVar0 = unk_0xEE7957BF5F06F733(iParam0);
		}
		else
		{
			iVar0 = unk_0x412F97477A158C0F(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xEE7957BF5F06F733(iParam0);
	}
	else
	{
		iVar0 = unk_0x412F97477A158C0F(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1756;
					break;
				
				case 1:
					*uParam2 = 1757;
					break;
				
				case 2:
					*uParam2 = 1758;
					break;
				
				case 3:
					*uParam2 = 1759;
					break;
				
				case 4:
					*uParam2 = 1760;
					break;
				
				case 5:
					*uParam2 = 1761;
					break;
				
				case 6:
					*uParam2 = 1768;
					break;
				
				case 7:
					*uParam2 = 1769;
					break;
				
				case 8:
					*uParam2 = 1770;
					break;
				
				case 9:
					*uParam2 = 1771;
					break;
				
				case 10:
					*uParam2 = 1772;
					break;
				
				case 11:
					*uParam2 = 1773;
					break;
				
				case 12:
					*uParam2 = 1774;
					break;
				
				case 13:
					*uParam2 = 1782;
					break;
				
				case 14:
					*uParam2 = 1783;
					break;
				
				case 15:
					*uParam2 = 1884;
					break;
				
				case 16:
					*uParam2 = 1885;
					break;
				
				case 17:
					*uParam2 = 1916;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2038;
					break;
				
				case 24:
					*uParam2 = 2039;
					break;
				
				case 25:
					*uParam2 = 2065;
					break;
				
				case 26:
					*uParam2 = 2066;
					break;
				
				case 27:
					*uParam2 = 2067;
					break;
				
				case 28:
					*uParam2 = 2068;
					break;
				
				case 29:
					*uParam2 = 2069;
					break;
				
				case 30:
					*uParam2 = 2070;
					break;
				
				case 31:
					*uParam2 = 2071;
					break;
				
				case 32:
					*uParam2 = 2072;
					break;
				
				case 33:
					*uParam2 = 2073;
					break;
				
				case 34:
					*uParam2 = 2074;
					break;
				
				case 35:
					*uParam2 = 2321;
					break;
				
				case 36:
					*uParam2 = 2322;
					break;
				
				case 37:
					*uParam2 = 2378;
					break;
				
				case 38:
					*uParam2 = 2379;
					break;
				
				case 39:
					*uParam2 = 2380;
					break;
				
				case 40:
					*uParam2 = 2381;
					break;
				
				case 41:
					*uParam2 = 2440;
					break;
				
				case 42:
					*uParam2 = 2441;
					break;
				
				case 43:
					*uParam2 = 2442;
					break;
				
				case 44:
					*uParam2 = 2443;
					break;
				
				case 45:
					*uParam2 = 2444;
					break;
				
				case 46:
					*uParam2 = 2445;
					break;
				
				case 47:
					*uParam2 = 2446;
					break;
				
				case 48:
					*uParam2 = 2447;
					break;
				
				case 49:
					*uParam2 = 2448;
					break;
				
				case 50:
					*uParam2 = 2449;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3185;
					break;
				
				case 63:
					*uParam2 = 3186;
					break;
				
				case 64:
					*uParam2 = 3187;
					break;
				
				case 65:
					*uParam2 = 3188;
					break;
				
				case 66:
					*uParam2 = 3189;
					break;
				
				case 67:
					*uParam2 = 3190;
					break;
				
				case 68:
					*uParam2 = 3658;
					break;
				
				case 69:
					*uParam2 = 3659;
					break;
				
				case 70:
					*uParam2 = 3660;
					break;
				
				case 71:
					*uParam2 = 3661;
					break;
				
				case 72:
					*uParam2 = 3662;
					break;
				
				case 73:
					*uParam2 = 3663;
					break;
				
				case 74:
					*uParam2 = 3664;
					break;
				
				case 75:
					*uParam2 = 3665;
					break;
				
				case 76:
					*uParam2 = 3666;
					break;
				
				case 77:
					*uParam2 = 3667;
					break;
				
				case 78:
					*uParam2 = 3775;
					break;
				
				case 79:
					*uParam2 = 3776;
					break;
				
				case 80:
					*uParam2 = 3777;
					break;
				
				case 81:
					*uParam2 = 3778;
					break;
				
				case 82:
					*uParam2 = 3779;
					break;
				
				case 83:
					*uParam2 = 3780;
					break;
				
				case 84:
					*uParam2 = 3781;
					break;
				
				case 85:
					*uParam2 = 3782;
					break;
				
				case 86:
					*uParam2 = 3885;
					break;
				
				case 87:
					*uParam2 = 3886;
					break;
				
				case 88:
					*uParam2 = 3887;
					break;
				
				case 89:
					*uParam2 = 5320;
					break;
				
				case 90:
					*uParam2 = 5321;
					break;
				
				case 91:
					*uParam2 = 5322;
					break;
				
				case 92:
					*uParam2 = 5323;
					break;
				
				case 93:
					*uParam2 = 5324;
					break;
				
				case 94:
					*uParam2 = 5325;
					break;
				
				case 95:
					*uParam2 = 5326;
					break;
				
				case 96:
					*uParam2 = 5327;
					break;
				
				case 97:
					*uParam2 = 5328;
					break;
				
				case 98:
					*uParam2 = 5329;
					break;
				
				case 99:
					*uParam2 = 5330;
					break;
				
				case 100:
					*uParam2 = 5331;
					break;
				
				case 101:
					*uParam2 = 5377;
					break;
				
				case 102:
					*uParam2 = 5378;
					break;
				
				case 103:
					*uParam2 = 5379;
					break;
				
				case 104:
					*uParam2 = 5380;
					break;
				
				case 105:
					*uParam2 = 5381;
					break;
				
				case 106:
					*uParam2 = 5382;
					break;
				
				case 107:
					*uParam2 = 5383;
					break;
				
				case 108:
					*uParam2 = 5384;
					break;
				
				case 109:
					*uParam2 = 5385;
					break;
				
				case 110:
					*uParam2 = 5386;
					break;
				
				case 111:
					*uParam2 = 5387;
					break;
				
				case 112:
					*uParam2 = 5388;
					break;
				
				case 113:
					*uParam2 = 5389;
					break;
				
				case 114:
					*uParam2 = 5390;
					break;
				
				case 115:
					*uParam2 = 5391;
					break;
				
				case 116:
					*uParam2 = 5392;
					break;
				
				case 117:
					*uParam2 = 5393;
					break;
				
				case 118:
					*uParam2 = 5394;
					break;
				
				case 119:
					*uParam2 = 5395;
					break;
				
				case 120:
					*uParam2 = 5396;
					break;
				
				case 121:
					*uParam2 = 5397;
					break;
				
				case 122:
					*uParam2 = 5398;
					break;
				
				case 123:
					*uParam2 = 5399;
					break;
				
				case 124:
					*uParam2 = 6105;
					break;
				
				case 125:
					*uParam2 = 6106;
					break;
				
				case 126:
					*uParam2 = 6107;
					break;
				
				case 127:
					*uParam2 = 6108;
					break;
				
				case 128:
					*uParam2 = 6109;
					break;
				
				case 129:
					*uParam2 = 6110;
					break;
				
				case 130:
					*uParam2 = 6111;
					break;
				
				case 131:
					*uParam2 = 6112;
					break;
				
				case 132:
					*uParam2 = 6113;
					break;
				
				case 133:
					*uParam2 = 6114;
					break;
				
				case 134:
					*uParam2 = 6115;
					break;
				
				case 135:
					*uParam2 = 6116;
					break;
				
				case 136:
					*uParam2 = 6117;
					break;
				
				case 137:
					*uParam2 = 6118;
					break;
				
				case 138:
					*uParam2 = 6119;
					break;
				
				case 139:
					*uParam2 = 6418;
					break;
				
				case 140:
					*uParam2 = 6419;
					break;
				
				case 141:
					*uParam2 = 6420;
					break;
				
				case 142:
					*uParam2 = 6421;
					break;
				
				case 143:
					*uParam2 = 6422;
					break;
				
				case 144:
					*uParam2 = 6423;
					break;
				
				case 145:
					*uParam2 = 6424;
					break;
				
				case 146:
					*uParam2 = 6425;
					break;
				
				case 147:
					*uParam2 = 6426;
					break;
				
				case 148:
					*uParam2 = 6427;
					break;
				
				case 149:
					*uParam2 = 6428;
					break;
				
				case 150:
					*uParam2 = 6429;
					break;
				
				case 151:
					*uParam2 = 6430;
					break;
				
				case 152:
					*uParam2 = 6431;
					break;
				
				case 153:
					*uParam2 = 6432;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1762;
					break;
				
				case 1:
					*uParam2 = 1763;
					break;
				
				case 2:
					*uParam2 = 1764;
					break;
				
				case 3:
					*uParam2 = 1765;
					break;
				
				case 4:
					*uParam2 = 1766;
					break;
				
				case 5:
					*uParam2 = 1767;
					break;
				
				case 6:
					*uParam2 = 1775;
					break;
				
				case 7:
					*uParam2 = 1776;
					break;
				
				case 8:
					*uParam2 = 1777;
					break;
				
				case 9:
					*uParam2 = 1778;
					break;
				
				case 10:
					*uParam2 = 1779;
					break;
				
				case 11:
					*uParam2 = 1780;
					break;
				
				case 12:
					*uParam2 = 1781;
					break;
				
				case 13:
					*uParam2 = 1784;
					break;
				
				case 14:
					*uParam2 = 1785;
					break;
				
				case 15:
					*uParam2 = 1886;
					break;
				
				case 16:
					*uParam2 = 1887;
					break;
				
				case 17:
					*uParam2 = 1917;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2040;
					break;
				
				case 24:
					*uParam2 = 2041;
					break;
				
				case 25:
					*uParam2 = 2075;
					break;
				
				case 26:
					*uParam2 = 2076;
					break;
				
				case 27:
					*uParam2 = 2077;
					break;
				
				case 28:
					*uParam2 = 2078;
					break;
				
				case 29:
					*uParam2 = 2079;
					break;
				
				case 30:
					*uParam2 = 2080;
					break;
				
				case 31:
					*uParam2 = 2081;
					break;
				
				case 32:
					*uParam2 = 2082;
					break;
				
				case 33:
					*uParam2 = 2083;
					break;
				
				case 34:
					*uParam2 = 2084;
					break;
				
				case 35:
					*uParam2 = 2323;
					break;
				
				case 36:
					*uParam2 = 2324;
					break;
				
				case 37:
					*uParam2 = 2382;
					break;
				
				case 38:
					*uParam2 = 2383;
					break;
				
				case 39:
					*uParam2 = 2384;
					break;
				
				case 40:
					*uParam2 = 2385;
					break;
				
				case 41:
					*uParam2 = 2450;
					break;
				
				case 42:
					*uParam2 = 2451;
					break;
				
				case 43:
					*uParam2 = 2452;
					break;
				
				case 44:
					*uParam2 = 2453;
					break;
				
				case 45:
					*uParam2 = 2454;
					break;
				
				case 46:
					*uParam2 = 2455;
					break;
				
				case 47:
					*uParam2 = 2456;
					break;
				
				case 48:
					*uParam2 = 2457;
					break;
				
				case 49:
					*uParam2 = 2458;
					break;
				
				case 50:
					*uParam2 = 2459;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3191;
					break;
				
				case 63:
					*uParam2 = 3192;
					break;
				
				case 64:
					*uParam2 = 3193;
					break;
				
				case 65:
					*uParam2 = 3194;
					break;
				
				case 66:
					*uParam2 = 3195;
					break;
				
				case 67:
					*uParam2 = 3196;
					break;
				
				case 68:
					*uParam2 = 3668;
					break;
				
				case 69:
					*uParam2 = 3669;
					break;
				
				case 70:
					*uParam2 = 3670;
					break;
				
				case 71:
					*uParam2 = 3671;
					break;
				
				case 72:
					*uParam2 = 3672;
					break;
				
				case 73:
					*uParam2 = 3673;
					break;
				
				case 74:
					*uParam2 = 3674;
					break;
				
				case 75:
					*uParam2 = 3675;
					break;
				
				case 76:
					*uParam2 = 3676;
					break;
				
				case 77:
					*uParam2 = 3677;
					break;
				
				case 78:
					*uParam2 = 3783;
					break;
				
				case 79:
					*uParam2 = 3784;
					break;
				
				case 80:
					*uParam2 = 3785;
					break;
				
				case 81:
					*uParam2 = 3786;
					break;
				
				case 82:
					*uParam2 = 3787;
					break;
				
				case 83:
					*uParam2 = 3788;
					break;
				
				case 84:
					*uParam2 = 3789;
					break;
				
				case 85:
					*uParam2 = 3790;
					break;
				
				case 86:
					*uParam2 = 3888;
					break;
				
				case 87:
					*uParam2 = 3889;
					break;
				
				case 88:
					*uParam2 = 3890;
					break;
				
				case 89:
					*uParam2 = 5332;
					break;
				
				case 90:
					*uParam2 = 5333;
					break;
				
				case 91:
					*uParam2 = 5334;
					break;
				
				case 92:
					*uParam2 = 5335;
					break;
				
				case 93:
					*uParam2 = 5336;
					break;
				
				case 94:
					*uParam2 = 5337;
					break;
				
				case 95:
					*uParam2 = 5338;
					break;
				
				case 96:
					*uParam2 = 5339;
					break;
				
				case 97:
					*uParam2 = 5340;
					break;
				
				case 98:
					*uParam2 = 5341;
					break;
				
				case 99:
					*uParam2 = 5342;
					break;
				
				case 100:
					*uParam2 = 5343;
					break;
				
				case 101:
					*uParam2 = 5400;
					break;
				
				case 102:
					*uParam2 = 5401;
					break;
				
				case 103:
					*uParam2 = 5402;
					break;
				
				case 104:
					*uParam2 = 5403;
					break;
				
				case 105:
					*uParam2 = 5404;
					break;
				
				case 106:
					*uParam2 = 5405;
					break;
				
				case 107:
					*uParam2 = 5406;
					break;
				
				case 108:
					*uParam2 = 5407;
					break;
				
				case 109:
					*uParam2 = 5408;
					break;
				
				case 110:
					*uParam2 = 5409;
					break;
				
				case 111:
					*uParam2 = 5410;
					break;
				
				case 112:
					*uParam2 = 5411;
					break;
				
				case 113:
					*uParam2 = 5412;
					break;
				
				case 114:
					*uParam2 = 5413;
					break;
				
				case 115:
					*uParam2 = 5414;
					break;
				
				case 116:
					*uParam2 = 5415;
					break;
				
				case 117:
					*uParam2 = 5416;
					break;
				
				case 118:
					*uParam2 = 5417;
					break;
				
				case 119:
					*uParam2 = 5418;
					break;
				
				case 120:
					*uParam2 = 5419;
					break;
				
				case 121:
					*uParam2 = 5420;
					break;
				
				case 122:
					*uParam2 = 5421;
					break;
				
				case 123:
					*uParam2 = 5422;
					break;
				
				case 124:
					*uParam2 = 6120;
					break;
				
				case 125:
					*uParam2 = 6121;
					break;
				
				case 126:
					*uParam2 = 6122;
					break;
				
				case 127:
					*uParam2 = 6123;
					break;
				
				case 128:
					*uParam2 = 6124;
					break;
				
				case 129:
					*uParam2 = 6125;
					break;
				
				case 130:
					*uParam2 = 6126;
					break;
				
				case 131:
					*uParam2 = 6127;
					break;
				
				case 132:
					*uParam2 = 6128;
					break;
				
				case 133:
					*uParam2 = 6129;
					break;
				
				case 134:
					*uParam2 = 6130;
					break;
				
				case 135:
					*uParam2 = 6131;
					break;
				
				case 136:
					*uParam2 = 6132;
					break;
				
				case 137:
					*uParam2 = 6133;
					break;
				
				case 138:
					*uParam2 = 6134;
					break;
				
				case 139:
					*uParam2 = 6433;
					break;
				
				case 140:
					*uParam2 = 6434;
					break;
				
				case 141:
					*uParam2 = 6435;
					break;
				
				case 142:
					*uParam2 = 6436;
					break;
				
				case 143:
					*uParam2 = 6437;
					break;
				
				case 144:
					*uParam2 = 6438;
					break;
				
				case 145:
					*uParam2 = 6439;
					break;
				
				case 146:
					*uParam2 = 6440;
					break;
				
				case 147:
					*uParam2 = 6441;
					break;
				
				case 148:
					*uParam2 = 6442;
					break;
				
				case 149:
					*uParam2 = 6443;
					break;
				
				case 150:
					*uParam2 = 6444;
					break;
				
				case 151:
					*uParam2 = 6445;
					break;
				
				case 152:
					*uParam2 = 6446;
					break;
				
				case 153:
					*uParam2 = 6447;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 7872;
}

bool func_27(int iParam0)//Position - 0x6B30
{
	return Global_35861 == iParam0;
}

int func_28(int iParam0)//Position - 0x6B3E
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_29(int iParam0, int iParam1, int iParam2)//Position - 0x6C12
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_70671[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = unk_0x23A6BE673BD02B2D(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			unk_0x54F960113E1CDCA9(iVar3, &Var2);
			if (!unk_0x42683C90F2D005ED(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_17(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_17(&(Global_70671[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var6);
		iVar9 = 0;
		iVar10 = unk_0xB214E83F6B0D8129(iVar1, 6, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			unk_0x53CE22B0EDFAB540(iVar8, &Var6);
			if (!unk_0x42683C90F2D005ED(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_2621444 = Var6.f_1;
					Global_2621445 = Var6;
					func_17(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x6C297174CFC8C5B2(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var11);
		iVar13 = 0;
		iVar14 = unk_0xB214E83F6B0D8129(iVar1, 6, -1, 0, -1, func_9(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			unk_0x19002A6D4CBCE1E2(iVar12, &Var11);
			if (!unk_0x42683C90F2D005ED(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_2621444 = Var11.f_1;
					Global_2621445 = Var11;
					func_17(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x6C297174CFC8C5B2(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_30(int iParam0)//Position - 0x6E8D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 9);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_31(int iParam0)//Position - 0x6FE3
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 48);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_32(int iParam0)//Position - 0x74F0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_33(int iParam0)//Position - 0x7564
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_34(int iParam0)//Position - 0x75D7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 6);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_35(int iParam0)//Position - 0x76BD
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_29(iVar7, iParam0, 33);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_36(int iParam0)//Position - 0x7A1F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_29(iVar7, iParam0, 17);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_37(int iParam0)//Position - 0x7C2F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 18);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_38(int iParam0)//Position - 0x7E5E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 7);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_39(int iParam0)//Position - 0x7F6D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_29(iVar7, iParam0, 84);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_40(int iParam0)//Position - 0x8977
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_29(iVar7, iParam0, 104);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_41(int iParam0)//Position - 0x94E9
{
	if (iParam0 < 136)
	{
		func_43(iParam0);
	}
	else
	{
		func_42(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_29(3, iParam0, 242);
	}
}

void func_42(int iParam0)//Position - 0x951D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_43(int iParam0)//Position - 0xA121
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_44(int iParam0)//Position - 0xB02F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 9);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_45(int iParam0)//Position - 0xB15B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_29(iVar7, iParam0, 7);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_46(int iParam0, int iParam1)//Position - 0xB258
{
	switch (iParam0)
	{
		case 0:
			func_64(iParam1);
			break;
		
		case 2:
			func_63(iParam1);
			break;
		
		case 3:
			func_59(iParam1);
			break;
		
		case 4:
			func_58(iParam1);
			break;
		
		case 6:
			func_57(iParam1);
			break;
		
		case 5:
			func_56(iParam1);
			break;
		
		case 8:
			func_55(iParam1);
			break;
		
		case 9:
			func_54(iParam1);
			break;
		
		case 10:
			func_53(iParam1);
			break;
		
		case 1:
			func_52(iParam1);
			break;
		
		case 7:
			func_51(iParam1);
			break;
		
		case 11:
			func_50(iParam1);
			break;
		
		case 12:
			func_49(iParam1);
			break;
		
		case 13:
			func_48(iParam1);
			break;
		
		case 14:
			func_47(iParam1);
			break;
	}
}

void func_47(int iParam0)//Position - 0xB348
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 175);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_48(int iParam0)//Position - 0xC83A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 9);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_49(int iParam0)//Position - 0xC98A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 47);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_50(int iParam0)//Position - 0xCE94
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_29(iVar7, iParam0, 63);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_51(int iParam0)//Position - 0xD501
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_52(int iParam0)//Position - 0xD574
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 5);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_53(int iParam0)//Position - 0xD643
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 53);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_54(int iParam0)//Position - 0xDB72
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 12);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_55(int iParam0)//Position - 0xDD08
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 77);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_56(int iParam0)//Position - 0xE505
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 7);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_57(int iParam0)//Position - 0xE614
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_29(iVar7, iParam0, 134);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_58(int iParam0)//Position - 0xF53E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_29(iVar7, iParam0, 117);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_59(int iParam0)//Position - 0x101FC
{
	if (iParam0 < 107)
	{
		func_62(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_61(iParam0);
	}
	else
	{
		func_60(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_29(3, iParam0, 318);
	}
}

void func_60(int iParam0)//Position - 0x10241
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_61(int iParam0)//Position - 0x10CE6
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_62(int iParam0)//Position - 0x11AD5
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_63(int iParam0)//Position - 0x1271E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 21);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_64(int iParam0)//Position - 0x12996
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_29(iVar7, iParam0, 10);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_65(int iParam0, int iParam1)//Position - 0x12ADB
{
	switch (iParam0)
	{
		case 0:
			func_82(iParam1);
			break;
		
		case 2:
			func_81(iParam1);
			break;
		
		case 3:
			func_78(iParam1);
			break;
		
		case 4:
			func_77(iParam1);
			break;
		
		case 6:
			func_76(iParam1);
			break;
		
		case 5:
			func_75(iParam1);
			break;
		
		case 8:
			func_74(iParam1);
			break;
		
		case 9:
			func_73(iParam1);
			break;
		
		case 10:
			func_72(iParam1);
			break;
		
		case 1:
			func_71(iParam1);
			break;
		
		case 7:
			func_70(iParam1);
			break;
		
		case 11:
			func_69(iParam1);
			break;
		
		case 12:
			func_68(iParam1);
			break;
		
		case 13:
			func_67(iParam1);
			break;
		
		case 14:
			func_66(iParam1);
			break;
	}
}

void func_66(int iParam0)//Position - 0x12BCB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_29(iVar7, iParam0, 113);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_67(int iParam0)//Position - 0x13954
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 10);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_68(int iParam0)//Position - 0x13ACD
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 53);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_69(int iParam0)//Position - 0x14045
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 45);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_70(int iParam0)//Position - 0x1456E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_71(int iParam0)//Position - 0x145E1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 5);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_72(int iParam0)//Position - 0x146B0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_29(iVar7, iParam0, 48);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_73(int iParam0)//Position - 0x14B87
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 20);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_74(int iParam0)//Position - 0x14DEF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 24);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_75(int iParam0)//Position - 0x150C4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 14);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_76(int iParam0)//Position - 0x1528C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_29(iVar7, iParam0, 99);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_77(int iParam0)//Position - 0x15DDF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 113);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_78(int iParam0)//Position - 0x16A28
{
	if (iParam0 < 60)
	{
		func_80(iParam0);
	}
	else
	{
		func_79(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_29(3, iParam0, 181);
	}
}

void func_79(int iParam0)//Position - 0x16A5C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_80(int iParam0)//Position - 0x177FC
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_81(int iParam0)//Position - 0x17E88
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 6);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_82(int iParam0)//Position - 0x17F6E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_29(iVar7, iParam0, 7);
			return;
			break;
	}
	func_17(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_83()//Position - 0x1806C
{
	Global_70671[0 /*14*/].f_1 = -1;
	Global_70671[0 /*14*/].f_2 = -1;
	Global_70671[0 /*14*/].f_5 = -1;
	Global_70671[0 /*14*/].f_3 = -1;
	Global_70671[0 /*14*/].f_4 = -1;
	Global_70671[0 /*14*/].f_7 = 0;
	Global_70671[0 /*14*/].f_6 = 0;
	Global_70671[0 /*14*/].f_13 = -1;
	Global_70671[0 /*14*/].f_12 = 0;
	Global_70671[0 /*14*/] = 0;
	StringCopy(&(Global_70671[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x180E5
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_13(iParam0);
		Global_104555.f_2353.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_104555.f_2353.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x183EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_9(iParam3);
	iVar1 = unk_0x7A8C4EAB4DAEE8ED(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x0BE76048E700C028(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_86(int iParam0)//Position - 0x18470
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_87(int iParam0, var uParam1, int iParam2)//Position - 0x18520
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_92(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_91(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_90(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_89(iVar0))
		{
			uParam1->f_59 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x3A711520F83BAE98() && unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			if (func_88(161, -1))
			{
				uParam1->f_59 = func_20(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_20(749, Global_70668, 0);
			}
			uParam1->f_60 = func_20(750, Global_70668, 0);
			uParam1->f_61 = func_20(751, Global_70668, 0);
		}
		if (unk_0x3A711520F83BAE98() && iParam0 == unk_0xFC1458A37D98B502())
		{
			if (func_88(161, -1))
			{
				uParam1->f_59 = func_20(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_20(749, Global_70668, 0);
			}
		}
	}
}

int func_88(int iParam0, int iParam1)//Position - 0x186CA
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_21(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_89(int iParam0)//Position - 0x186F6
{
	return iParam0 < 3;
}

void func_90(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x18702
{
	int iVar0;
	
	iVar0 = func_92(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
		*uParam3 = unk_0xC563C871267881C4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x97610277C0BBC6FC(iParam0) && unk_0x928EC8A04257C833(iParam0) != -1)
				{
					*uParam2 = unk_0x928EC8A04257C833(iParam0);
					*uParam3 = unk_0xDA2D990A7F8DFA7E(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_91(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x18C4A
{
	int iVar0;
	
	iVar0 = func_92(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x4CDD2D1D66ED1DE4(iParam0, iParam1);
		*uParam3 = unk_0xDCC2BD4C56470D10(iParam0, iParam1);
		*uParam4 = unk_0x6AC6F0502D04B9F9(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_92(int iParam0)//Position - 0x18E8B
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_93(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_93(int iParam0)//Position - 0x18EC8
{
	if (func_89(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_94(char* sParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x18EF2
{
	if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vParam1, true) < fParam2 && !*bParam3)
	{
		unk_0x393584863A2F304E(sParam0, 8);
		*bParam3 = 1;
	}
}

int func_95(vector3 vParam0, float fParam1)//Position - 0x18F27
{
	switch (iLocal_566)
	{
		case 0:
			if (func_97(&iLocal_88, 15, -808,0422f, 168,5755f, 75,7504f, 244,0649f, 1))
			{
				iLocal_566++;
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
			{
				unk_0x797EAF57A872C68A(iLocal_88, 2, 3, 0);
				unk_0x797EAF57A872C68A(iLocal_88, 3, 4, 0);
				unk_0x797EAF57A872C68A(iLocal_88, 4, 4, 0);
				unk_0x797EAF57A872C68A(iLocal_88, 6, 2, 0);
				unk_0x90E2821D9B0C8B36(iLocal_88, 0, 0, 0);
				unk_0x90E2821D9B0C8B36(iLocal_88, 1, 1, 0);
				iLocal_566++;
			}
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
			{
				if (unk_0xE2C8F7DB3CF678AC(iLocal_88))
				{
					unk_0x03924C68EFCBC511(iLocal_88, 2, 3, 0, 0);
					unk_0x03924C68EFCBC511(iLocal_88, 3, 4, 0, 0);
					unk_0x03924C68EFCBC511(iLocal_88, 4, 4, 0, 0);
					unk_0x03924C68EFCBC511(iLocal_88, 6, 2, 0, 0);
					unk_0x0B652E456D6A7E32(iLocal_88, 0, 0, 0, false);
					unk_0x0B652E456D6A7E32(iLocal_88, 1, 1, 0, false);
					unk_0xBD8D47FDC6902B2D(iLocal_88, vParam0, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_88, fParam1);
					func_96(iLocal_88);
					unk_0x3C442931F035583A(iLocal_88);
					unk_0xB269CBCAD1DBD4E2(iLocal_88);
					iLocal_566 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_96(int iParam0)//Position - 0x19048
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		unk_0xC854D7A2E956B946(iParam0, 0);
		unk_0x5C5D33A1B2711D21(iParam0, false);
		unk_0x07224EEE13A1B6AE(iParam0, 0);
		unk_0xAE01EF4BC84AFE7C(iParam0, 104, true);
		unk_0xB89BC60EFF7F2571(iParam0, 0);
		unk_0xA7C52BDFAE69B37F(iParam0, 1);
		unk_0xFF96DC2FA12B7785(iParam0, 0);
		unk_0x771A86309E0CA47B(iParam0, 1);
		unk_0xCE93FCB8A8D8DF0B(iParam0, iLocal_114);
	}
}

int func_97(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x1909C
{
	int iVar0;
	
	if (!func_89(iParam1))
	{
		iVar0 = func_99(iParam1);
		unk_0x6FF834D85E2DD4C6(iVar0);
		if (unk_0x9A0B2ED5055D3F0B(iVar0))
		{
			if (unk_0x6ADD12BF4D6D2587(*iParam0))
			{
				unk_0x68433819717660CF(iParam0);
			}
			*iParam0 = unk_0xAC992EFAD62C33BF(26, iVar0, vParam2, fParam3, 0, false);
			unk_0xE537629E02E8DA21(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x4CDD2D1D66ED1DE4(*iParam0, 3) == 0)
				{
					unk_0x03924C68EFCBC511(*iParam0, 5, 2, 0, 0);
				}
			}
			func_98(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x14776E43F90DD454(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_98(var uParam0, int iParam1)//Position - 0x1912A
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_88812[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_99(int iParam0)//Position - 0x19170
{
	if (!func_89(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_100()//Position - 0x1919B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_569)
	{
		case 0:
			if (iLocal_70 < 3 || (iLocal_70 == 11 && iLocal_72 < 3))
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_133) < 40000f)
				{
					iLocal_569++;
				}
			}
			break;
		
		case 1:
			bVar0 = false;
			if ((iLocal_70 > 2 && iLocal_70 != 11) || (iLocal_70 == 11 && iLocal_72 > 2))
			{
				bVar0 = true;
			}
			if (func_141(bVar0))
			{
				fLocal_570 = 0f;
				iLocal_569++;
			}
			break;
		
		case 2:
			if (!iLocal_571)
			{
				if (unk_0x50126692B8A3590A(-1105,241f, -1697,025f, 3,3678f, 2f, -741944541, 0))
				{
					iVar1 = unk_0xCBD07018689DF383(-1105,241f, -1697,025f, 3,3678f, 2f, -741944541, 1, 0, 1);
					unk_0xD38F266C132F2897(iVar1, true, true, true, true, true, 1, 0, 0);
					unk_0xEDC33A771FAEB393(iVar1, true);
					iLocal_571 = 1;
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_90))
			{
				if (!unk_0xA6FA9E5D08F067AD(iLocal_90))
				{
					if (!unk_0x249997FC5AF56FA8(iLocal_90, "PROP_HUMAN_SEAT_CHAIR"))
					{
						unk_0xBD8D47FDC6902B2D(iLocal_90, vLocal_133, 1, false, 0, 1);
						if (unk_0x70618273A570C7E0(vLocal_133, "PROP_HUMAN_SEAT_CHAIR", 2f, 1))
						{
							unk_0xB6FD596C667F191F(iLocal_90, -1105,241f, -1697,025f, 3,3678f, 2f, 0);
						}
					}
				}
			}
			iVar2 = 0;
			while (iVar2 < iLocal_96)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_96[iVar2]) && unk_0xB8DE76287EDC4957(iLocal_96[iVar2], 0))
				{
					if (iLocal_70 <= 2)
					{
						if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_96[iVar2], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 9f)
						{
							unk_0x4FB260623DD93924(0, 263, 1);
							unk_0x4FB260623DD93924(0, 141, 1);
							unk_0x4FB260623DD93924(0, 140, 1);
						}
					}
					if (iLocal_70 < 2)
					{
						if (unk_0x37956F2B588E40E6(iLocal_96[iVar2]) != 2)
						{
							unk_0x4BEFCD5DAE410A90(iLocal_96[iVar2], 2);
						}
					}
					else if (unk_0x37956F2B588E40E6(iLocal_96[iVar2]) == 2)
					{
						unk_0x4BEFCD5DAE410A90(iLocal_96[iVar2], 1);
					}
				}
				iVar2++;
			}
			func_102();
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_133) > 44100f)
			{
				func_101();
				iLocal_569 = 0;
			}
			break;
	}
}

void func_101()//Position - 0x193C7
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_90))
	{
		unk_0x68433819717660CF(&iLocal_90);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_96)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_96[iVar0]))
		{
			unk_0xC91FE17AD7353B70(&(iLocal_96[iVar0]));
		}
		iVar0++;
	}
	unk_0x14776E43F90DD454(joaat("tribike"));
	unk_0x14776E43F90DD454(joaat("bmx"));
	unk_0x14776E43F90DD454(joaat("cruiser"));
	unk_0x14776E43F90DD454(joaat("scorcher"));
	unk_0x14776E43F90DD454(joaat("u_m_m_bikehire_01"));
}

void func_102()//Position - 0x19435
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar1 = 0;
	bVar2 = false;
	iVar3 = 0;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
	}
	else if (unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0))
	{
		iVar0 = unk_0xC733212BF9066BDF();
	}
	if (((((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) && !unk_0xB0DA749C8A7CCBBF(iVar0, joaat("scorcher"))) && !unk_0xB0DA749C8A7CCBBF(iVar0, joaat("cruiser"))) && !unk_0xB0DA749C8A7CCBBF(iVar0, joaat("tribike"))) && !unk_0xB0DA749C8A7CCBBF(iVar0, joaat("bmx")))
	{
		if (unk_0xE97272C977DEADD3(unk_0x90D5DFB054818BA7(iVar0)) > 2f)
		{
			if (unk_0x0C88267282FD588F(iVar0, -1106,309f, -1693,715f, 5,12379f, 6,25f, 7f, 3,25f, 0, 1, 0))
			{
				iVar4 = 0;
				while (iVar4 < iLocal_96)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_96[iVar4], 0))
					{
						if (unk_0x9A213A2345825783(iLocal_96[iVar4], iVar0))
						{
							bVar2 = true;
						}
					}
					iVar4++;
				}
			}
		}
	}
	if (iVar1 || bVar2)
	{
		iVar4 = 0;
		while (iVar4 < iLocal_96)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_96[iVar4], 0))
			{
				unk_0xEDC33A771FAEB393(iLocal_96[iVar4], false);
				unk_0xB8D9F55BA414128D(iLocal_96[iVar4], 0, 0f, 0f, -0,001f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			iVar4++;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_90))
		{
			if (bVar2)
			{
				func_103("FM2_BIKES");
			}
		}
	}
	bVar5 = false;
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		if ((((unk_0x4E69510C44147A5C(-1, unk_0xB3328BA8976B416C(iLocal_90, 1), 20f) || unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iLocal_90, 1), 20f, 1)) || unk_0xF1DE6FAA2EFAA34F(unk_0xB3328BA8976B416C(iLocal_90, 1) + Vector(20f, 20f, 20f), unk_0xB3328BA8976B416C(iLocal_90, 1) - Vector(20f, 20f, 20f), 0)) || unk_0xA6FA9E5D08F067AD(iLocal_90)) || ((iLocal_70 == 2 && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) && unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_133, 40f, 40f, 20f, 0, 1, 0)))
		{
			bVar5 = true;
		}
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_90, 1)) < 100f)
		{
			if (unk_0x46D8E79A1B95ACE2(iLocal_90, unk_0xFC1458A37D98B502()))
			{
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6) && unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_90))
				{
					fLocal_570 = (fLocal_570 + unk_0x46C19C2753391FBF());
					if (fLocal_570 > 0,5f)
					{
						bVar5 = true;
					}
				}
				else if (fLocal_570 > 0f)
				{
					fLocal_570 = (fLocal_570 - (unk_0x46C19C2753391FBF() * 2f));
				}
				else if (fLocal_570 != 0f)
				{
					fLocal_570 = 0f;
				}
			}
			if (unk_0xEBE499597C718EB8(iLocal_90, unk_0xFC1458A37D98B502(), 1) || unk_0x9F887157983E8EFC(iLocal_90))
			{
				bVar5 = true;
			}
		}
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_90, 1)) < 400f && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
		{
			iVar3 = 1;
			bVar5 = true;
		}
	}
	if (bVar5)
	{
		iVar4 = 0;
		while (iVar4 < iLocal_96)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_96[iVar4]))
			{
				unk_0xEDC33A771FAEB393(iLocal_96[iVar4], false);
			}
			iVar4++;
		}
		if ((!unk_0x3AB6A1A9084FB0A4(iLocal_90) && !unk_0xA6FA9E5D08F067AD(iLocal_90)) && unk_0x353094543C6ECFC4(iLocal_90))
		{
			unk_0x71400422DFE41CD2(iLocal_90, unk_0xB3328BA8976B416C(iLocal_90, 1) + unk_0xCE3B2111021F7234(iLocal_90));
			unk_0xD68E88A8E0BE8697(iLocal_90, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
		}
		if (unk_0xB8DE76287EDC4957(iLocal_94, 0))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_94))
			{
				unk_0x7674774BB9279265(iLocal_94);
			}
		}
		if (((iLocal_70 == 1 || iLocal_70 == 2) || (iLocal_70 == 3 && unk_0x21B6FFFD04C9FF3A(iLocal_89, iLocal_90, 30f, 30f, 30f, 0, 1, 0))) || iLocal_70 == 11)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
			{
				unk_0xE17958D3FD0F9EE9(iLocal_89, 2, false);
				unk_0xD68E88A8E0BE8697(iLocal_89, unk_0xFC1458A37D98B502(), 200f, 20000, 0, 0);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_90) && (unk_0x191BE1BC8F26F3C1(iLocal_90, 0) || unk_0x3AB6A1A9084FB0A4(iLocal_90)))
	{
		if ((iLocal_70 < 3 || (iLocal_70 == 3 && unk_0x21B6FFFD04C9FF3A(iLocal_89, iLocal_90, 30f, 30f, 30f, 0, 1, 0))) || iLocal_70 == 11)
		{
			func_103("FM2_BGHIT");
		}
	}
	else if ((((!unk_0x3AB6A1A9084FB0A4(iLocal_90) && unk_0xA6FA9E5D08F067AD(iLocal_90)) && iLocal_70 < 3) || fLocal_570 > 0,5f) || iVar3)
	{
		func_103("FM2_BGRUN");
	}
	else if (!unk_0x3AB6A1A9084FB0A4(iLocal_89) && unk_0xA6FA9E5D08F067AD(iLocal_89))
	{
		func_103("FM2_JSPOOK");
	}
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		iVar0 = 0;
	}
}

void func_103(char* sParam0)//Position - 0x1990C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	unk_0x8810DC630928B398("FAM2_STOP");
	if (unk_0x74C475EB8E73D398(sParam0, "FM2_JSPOOK"))
	{
		if (unk_0x6B4C37F2EEC636CC(iLocal_89))
		{
			sParam0 = "FM2_JIMHIT";
		}
	}
	func_128(sParam0);
	if (unk_0x74C475EB8E73D398(sParam0, "FM2_TSPOOK") || unk_0x74C475EB8E73D398(sParam0, "FM2_JSPOOK"))
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_88))
		{
			if (unk_0x4759A34EB65CCA39(iLocal_88, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
			{
				unk_0x88235B448509228B(iLocal_88);
			}
			unk_0xD68E88A8E0BE8697(iLocal_88, unk_0xFC1458A37D98B502(), 500f, 60000, 0, 0);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_89))
		{
			if (unk_0x4759A34EB65CCA39(iLocal_89, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
			{
				unk_0x88235B448509228B(iLocal_89);
			}
			unk_0xD68E88A8E0BE8697(iLocal_89, unk_0xFC1458A37D98B502(), 500f, 60000, 0, 0);
		}
	}
	while (!func_127())
	{
		system::wait(0);
	}
	if (iLocal_70 == 1)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
		else
		{
			iVar0 = unk_0x4E7809A068F46A31();
		}
		bVar1 = false;
		if (unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (func_454(iVar0))
			{
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0x6ADD12BF4D6D2587(Global_90339[iVar2]))
					{
						bVar1 = true;
						iVar2 = 3;
					}
					iVar2++;
				}
			}
			if (!unk_0xB0DA749C8A7CCBBF(iVar0, joaat("taxi")) && !bVar1)
			{
				if (system::vdist(unk_0xB3328BA8976B416C(iVar0, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 50f)
				{
					if (func_446(iVar0) != 0)
					{
						func_106(iVar0, 0, 145);
					}
				}
			}
		}
	}
	unk_0x990A0EC8D6FEA4BB("smboat");
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_101[iVar3]))
		{
			unk_0xE30CF11C0EE14316(&(iLocal_101[iVar3]));
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_100[iVar3]))
		{
			unk_0x68433819717660CF(&(iLocal_100[iVar3]));
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_99[iVar3]))
		{
			unk_0xC91FE17AD7353B70(&(iLocal_99[iVar3]));
		}
		iVar3++;
	}
	if (iLocal_70 >= 5 && iLocal_70 != 11)
	{
		while (!func_370(1, 1))
		{
			system::wait(0);
		}
		func_104(vLocal_124, fLocal_125);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_89))
	{
		unk_0x68433819717660CF(&iLocal_89);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_88))
	{
		unk_0x68433819717660CF(&iLocal_88);
	}
	if (unk_0xB8DE76287EDC4957(iLocal_93, 0))
	{
		unk_0x5380482A432E314E(&iLocal_93);
	}
	if (unk_0xB8DE76287EDC4957(iLocal_94, 0))
	{
		unk_0x5380482A432E314E(&iLocal_94);
	}
	func_573();
}

void func_104(vector3 vParam0, float fParam1)//Position - 0x19B59
{
	if (func_105(Global_71096, 0f, 0f, 0f, 0))
	{
		Global_71096 = { vParam0 };
		Global_71099 = fParam1;
	}
}

bool func_105(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x19B85
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_106(int iParam0, int iParam1, int iParam2)//Position - 0x19BCC
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0xA88FE81C0BDF2731(iParam0, &uVar0);
		if (!unk_0xAB019B170BF1309C(sVar1))
		{
			if (unk_0x8B948C59217A295D(sVar1) == unk_0x8B948C59217A295D("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_107(iParam0, iParam2);
	return 1;
}

void func_107(int iParam0, int iParam1)//Position - 0x19C0C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_113(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
		if (!unk_0x6ADD12BF4D6D2587(iVar0))
		{
			iVar0 = unk_0x96D3C6B7ED86BE3A(iParam0, -1);
		}
		if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x3AB6A1A9084FB0A4(iVar0))
		{
			if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104555.f_2353.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104555.f_32429.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104555.f_32429.f_5590 = iParam1;
	Global_70583 = iParam0;
	Global_104555.f_32429.f_5588 = 1;
	func_108(iParam0, &(Global_104555.f_32429.f_5510));
}

void func_108(int iParam0, var uParam1)//Position - 0x19E0E
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_112(uParam1);
		uParam1->f_66 = unk_0x82FF3DFBC3965CC0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF2D2D6860D636A58(iParam0), 16);
		*uParam1 = unk_0xBB95820E68A4EB0D(iParam0);
		unk_0xAEC96F2E5A91C606(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x0DA0B030029E4E6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x7869E6E4E193E666(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x55F371CF3DB9BFA1(iParam0);
		uParam1->f_67 = unk_0x7E3C3BFAB9ADD960(iParam0);
		uParam1->f_69 = unk_0x0260F35A831D6738(iParam0);
		uParam1->f_70 = unk_0x37956F2B588E40E6(iParam0);
		unk_0xFBAEDCD645F4B3F7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x063C5BF33FA1D85E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x378B727FB0126407(iParam0, 2))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
		}
		if (unk_0x378B727FB0126407(iParam0, 3))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
		}
		if (unk_0x378B727FB0126407(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
		}
		if (unk_0x378B727FB0126407(iParam0, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_111(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			uParam1->f_68 = unk_0xBFAC036AADDA5F9F(iParam0);
		}
		if (unk_0x849A8CFD71854E02(uParam1->f_66))
		{
			if (unk_0xEF8C0B8E0D7402FE(iParam0))
			{
				switch (unk_0xCD44B25535473ABE(iParam0))
				{
					case 3:
					case 0:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x84EE59E8804FCC8C(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 9);
		}
		if (unk_0xE7F7942A19E7A681(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 10);
		}
		if (unk_0x47833BA8B6BB150B(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 13);
			unk_0x91A0B42E2753BEF7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x11C2F368CD69AADB(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 12);
		}
		func_110(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_109(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3F7A17ABD44B7297(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 11);
		}
		if (unk_0xB80A4DA4C06A76F1(iParam0, "IgnoredByQuickSave") && unk_0xD5736BCB654EA8FC(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 27);
		}
	}
}

int func_109(int iParam0)//Position - 0x1A0B9
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_110(int iParam0, var uParam1, var uParam2)//Position - 0x1A169
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x55F6AB4050FE1F69(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF928889F6E5C7677(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_111(int iParam0)//Position - 0x1A243
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_112(var uParam0)//Position - 0x1A263
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_113(int iParam0)//Position - 0x1A313
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_448(iParam0, 0, 0)) || func_448(iParam0, 1, 0)) || func_448(iParam0, 2, 0)) || func_446(iParam0) != 145) || func_126(iParam0)) || func_125(iParam0)) || func_454(iParam0)) || func_124(iParam0)) || !func_114(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_125(iParam0))
		{
		}
		if (func_125(iParam0))
		{
		}
		if (func_448(iParam0, 0, 0))
		{
		}
		if (func_448(iParam0, 1, 0))
		{
		}
		if (func_448(iParam0, 2, 0))
		{
		}
		if (func_446(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_114(int iParam0)//Position - 0x1A3F0
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x428C7026AD2721BA(iParam0) || unk_0x849A8CFD71854E02(iParam0)) || unk_0xF9DDB1C0875FD9E0(iParam0)) || unk_0x3C4FA7AE145B3F72(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_115(int iParam0, bool bParam1)//Position - 0x1A5A1
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x3A711520F83BAE98()) || (iParam0 == joaat("buffalo3") && !unk_0x3A711520F83BAE98())) || (iParam0 == joaat("gauntlet2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blista3"))
	{
		if (!func_123())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF2653182352C7FB1())
		{
			if (unk_0x4F531CBC79B8645A(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x42683C90F2D005ED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_122() && !func_121()) && !func_120()) && !func_119()) && !func_123())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_120())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_118(iParam0))
		{
			return 0;
		}
	}
	if (!func_116(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_116(int iParam0)//Position - 0x1A72F
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_117())
	{
		return 1;
	}
	unk_0xD424C225D6534505(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBBA20694DE4179EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_117()//Position - 0x1A7FB
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_118(int iParam0)//Position - 0x1A812
{
	int iVar0;
	int iVar1;
	
	if (Global_2492197)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE3CCAFB1555348DF();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12250) && iVar1 < Global_262145.f_12251)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13548 && iVar1 < Global_262145.f_13560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13544 && iVar1 < Global_262145.f_13556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13545 && iVar1 < Global_262145.f_13557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13546 && iVar1 < Global_262145.f_13558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13547 && iVar1 < Global_262145.f_13559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13549 && iVar1 < Global_262145.f_13561)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13550 && iVar1 < Global_262145.f_13553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13551 && iVar1 < Global_262145.f_13554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13552 && iVar1 < Global_262145.f_13555)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16179 && iVar1 < Global_262145.f_16144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16174 && iVar1 < Global_262145.f_16139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16178 && iVar1 < Global_262145.f_16143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16177 && iVar1 < Global_262145.f_16142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16172 && iVar1 < Global_262145.f_16137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16175 && iVar1 < Global_262145.f_16140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16176 && iVar1 < Global_262145.f_16141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16173 && iVar1 < Global_262145.f_16138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16181 && iVar1 < Global_262145.f_16146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16182 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16180 && iVar1 < Global_262145.f_16145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16183 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16184 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16185 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16186 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16331 && iVar1 < Global_262145.f_16353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16332 && iVar1 < Global_262145.f_16354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16333 && iVar1 < Global_262145.f_16355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16334 && iVar1 < Global_262145.f_16356)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16335 && iVar1 < Global_262145.f_16357)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16336 && iVar1 < Global_262145.f_16358)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16338 && iVar1 < Global_262145.f_16359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16339 && iVar1 < Global_262145.f_16360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16340 && iVar1 < Global_262145.f_16361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16341 && iVar1 < Global_262145.f_16362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16342 && iVar1 < Global_262145.f_16363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16343 && iVar1 < Global_262145.f_16364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16344 && iVar1 < Global_262145.f_16365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16350 && iVar1 < Global_262145.f_16372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16347 && iVar1 < Global_262145.f_16368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16348 && iVar1 < Global_262145.f_16369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16349 && iVar1 < Global_262145.f_16370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16337 && iVar1 < Global_262145.f_16371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16351 && iVar1 < Global_262145.f_16373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16345 && iVar1 < Global_262145.f_16366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16346 && iVar1 < Global_262145.f_16367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16352 && iVar1 < Global_262145.f_16374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17980 && iVar1 < Global_262145.f_18056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17981 && iVar1 < Global_262145.f_18057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17982 && iVar1 < Global_262145.f_18058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17983 && iVar1 < Global_262145.f_18059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17984 && iVar1 < Global_262145.f_18060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17985 && iVar1 < Global_262145.f_18061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17986 && iVar1 < Global_262145.f_18062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17987 && iVar1 < Global_262145.f_18063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17988 && iVar1 < Global_262145.f_18064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17989 && iVar1 < Global_262145.f_18065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17990 && iVar1 < Global_262145.f_18066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17991 && iVar1 < Global_262145.f_18067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17992 && iVar1 < Global_262145.f_18068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17993 && iVar1 < Global_262145.f_18069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17994 && iVar1 < Global_262145.f_18070)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17995 && iVar1 < Global_262145.f_18071)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17996 && iVar1 < Global_262145.f_18072)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17997 && iVar1 < Global_262145.f_18073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17998 && iVar1 < Global_262145.f_18074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17999 && iVar1 < Global_262145.f_18075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18000 && iVar1 < Global_262145.f_18076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18001 && iVar1 < Global_262145.f_18077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18002 && iVar1 < Global_262145.f_18078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18003 && iVar1 < Global_262145.f_18079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18004 && iVar1 < Global_262145.f_18080)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19037 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19038 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19039 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19040 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_19916 && iVar1 < Global_262145.f_19924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_19917 && iVar1 < Global_262145.f_19925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_19918 && iVar1 < Global_262145.f_19926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19929)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_20692 && iVar1 < Global_262145.f_20712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_20704 && iVar1 < Global_262145.f_20724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_20695 && iVar1 < Global_262145.f_20715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_20705 && iVar1 < Global_262145.f_20725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_20693 && iVar1 < Global_262145.f_20713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_20709 && iVar1 < Global_262145.f_20729)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_20707 && iVar1 < Global_262145.f_20727)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_20708 && iVar1 < Global_262145.f_20728)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_20703 && iVar1 < Global_262145.f_20723)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_20710 && iVar1 < Global_262145.f_20730)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_20706 && iVar1 < Global_262145.f_20726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_20702 && iVar1 < Global_262145.f_20722)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_20694 && iVar1 < Global_262145.f_20714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_20696 && iVar1 < Global_262145.f_20716)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_20697 && iVar1 < Global_262145.f_20717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_20698 && iVar1 < Global_262145.f_20718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_20699 && iVar1 < Global_262145.f_20719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_20700 && iVar1 < Global_262145.f_20720)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_20701 && iVar1 < Global_262145.f_20721)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_21653 && iVar1 < Global_262145.f_21681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_21654 && iVar1 < Global_262145.f_21682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_21655 && iVar1 < Global_262145.f_21683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_21656 && iVar1 < Global_262145.f_21684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_21657 && iVar1 < Global_262145.f_21685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_21658 && iVar1 < Global_262145.f_21686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_21659 && iVar1 < Global_262145.f_21687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_21660 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_21661 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_21662 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_21663 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_21664 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_21665 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_21666 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_21667 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_22787 && iVar1 < Global_262145.f_22803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_22788 && iVar1 < Global_262145.f_22804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_22792 && iVar1 < Global_262145.f_22808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_22795 && iVar1 < Global_262145.f_22811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_22800 && iVar1 < Global_262145.f_22816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_22794 && iVar1 < Global_262145.f_22810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_22786 && iVar1 < Global_262145.f_22802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_22793 && iVar1 < Global_262145.f_22809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_22799 && iVar1 < Global_262145.f_22815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_22798 && iVar1 < Global_262145.f_22814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_22789 && iVar1 < Global_262145.f_22805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_22791 && iVar1 < Global_262145.f_22807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_22801 && iVar1 < Global_262145.f_22817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_22797 && iVar1 < Global_262145.f_22813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_22790 && iVar1 < Global_262145.f_22806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_22796 && iVar1 < Global_262145.f_22812)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_119()//Position - 0x1C09C
{
	return 0;
}

int func_120()//Position - 0x1C0A5
{
	return 1;
}

int func_121()//Position - 0x1C0AE
{
	return 1;
}

int func_122()//Position - 0x1C0B7
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_123()//Position - 0x1C0D0
{
	int iVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x872F1C1F8587CCC7(&iVar0, 2);
				unk_0x872F1C1F8587CCC7(&iVar0, 4);
				unk_0x872F1C1F8587CCC7(&iVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar0, 0);
					unk_0xDDFB38BD8B59BBB9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x1C18B
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_115(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x1C1D1
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]) && unk_0xB8DE76287EDC4957(Global_90309[iVar0], 0))
			{
				if (Global_90309[iVar0] == iParam0 && unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == unk_0x82FF3DFBC3965CC0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x1C24D
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[24]))
	{
		if (iParam0 == Global_69678.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69678.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127()//Position - 0x1C335
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92833 == 7 || Global_92833 == 8)
	{
		return 1;
	}
	return 0;
}

void func_128(char* sParam0)//Position - 0x1C362
{
	func_140(sParam0);
	func_129(0);
}

void func_129(int iParam0)//Position - 0x1C375
{
	int iVar0;
	
	if (Global_104555.f_9055 || func_139(0))
	{
		iVar0 = func_138();
		if (!func_130(iVar0))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
		Global_92869 = iParam0;
	}
}

int func_130(int iParam0)//Position - 0x1C3BA
{
	int iVar0;
	int iVar1;
	
	func_135();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_134(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_131(&(Global_104555.f_2353.f_539), iVar1);
	if (Global_87153 == Global_92870)
	{
		Global_104555.f_9055.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xC80D31E4B587871C(Global_83766[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xC623E2691C004001(0);
		}
	}
	Global_104555.f_9055.f_330[iVar1 /*6*/].f_2++;
	Global_87153 = Global_92870;
	if (iParam0 == -1)
	{
		if (Global_104555.f_9055)
		{
		}
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_131(var uParam0, int iParam1)//Position - 0x1C4D1
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_104555.f_18503[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_133(Global_104555.f_18503[iVar0], &vVar2, &fVar3))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_132(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90368[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_9 = 0f;
				Global_90368[iVar0 /*29*/].f_12 = 0f;
				Global_90368[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_10 = 0f;
				Global_90368[iVar0 /*29*/].f_13 = 0f;
				Global_90368[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_11 = 0f;
				Global_90368[iVar0 /*29*/].f_14 = 0f;
				Global_90368[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_26 = 0f;
				Global_90368[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_27 = 0f;
				Global_90368[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_132(var uParam0)//Position - 0x1C69A
{
	*uParam0 = -15;
}

int func_133(int iParam0, var uParam1, float fParam2)//Position - 0x1C6A8
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_133(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_133(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_134(int iParam0, bool bParam1)//Position - 0x1D017
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86963[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86963[iParam0 /*2*/] = 0;
	}
}

void func_135()//Position - 0x1D055
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_136())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
	}
	else if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_136())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 25);
	}
}

int func_136()//Position - 0x1D142
{
	func_137();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_137()//Position - 0x1D15B
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_93(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_92(unk_0xFC1458A37D98B502());
			if (func_89(iVar0) && (!func_27(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_89(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

int func_138()//Position - 0x1D258
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_139(bool bParam0)//Position - 0x1D28D
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_140(char* sParam0)//Position - 0x1D2B8
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (unk_0x96AAAC172E3B9680(sParam0) <= 16)
		{
			StringCopy(&Global_71088, sParam0, 16);
			StringCopy(&Global_71092, "", 16);
			if (unk_0x2D8BD7F773A1EA2C())
			{
				unk_0xBA895E5C4D5B8B12();
			}
		}
	}
}

bool func_141(bool bParam0)//Position - 0x1D2F7
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	unk_0x6FF834D85E2DD4C6(joaat("u_m_m_bikehire_01"));
	unk_0x6FF834D85E2DD4C6(joaat("cruiser"));
	unk_0x6FF834D85E2DD4C6(joaat("bmx"));
	unk_0x6FF834D85E2DD4C6(joaat("scorcher"));
	unk_0x6FF834D85E2DD4C6(joaat("tribike"));
	if ((((unk_0x9A0B2ED5055D3F0B(joaat("u_m_m_bikehire_01")) && unk_0x9A0B2ED5055D3F0B(joaat("cruiser"))) && unk_0x9A0B2ED5055D3F0B(joaat("bmx"))) && unk_0x9A0B2ED5055D3F0B(joaat("scorcher"))) && unk_0x9A0B2ED5055D3F0B(joaat("tribike")))
	{
		if (iLocal_166 != 0 || !bParam0)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_96[0]))
			{
				iLocal_96[0] = unk_0xEA60F3B426BB095B(joaat("scorcher"), -1106,885f, -1692,229f, 4,0189f, 0f, 1, 1, 0);
			}
			if (unk_0xB8DE76287EDC4957(iLocal_96[0], 0))
			{
				unk_0xAA93B7B448E10E40(iLocal_96[0], -1106,885f, -1692,229f, 4,0189f, 0, 0, 1);
				unk_0x47F55B6102CA9143(iLocal_96[0], -0,0504f, -0,0723f, -0,4427f, 0,8923f);
				unk_0x207466E78DA21033(iLocal_96[0], 2);
			}
		}
		if ((iLocal_165 != 1 && iLocal_166 != 1) || !bParam0)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_96[1]))
			{
				iLocal_96[1] = unk_0xEA60F3B426BB095B(joaat("cruiser"), -1108,396f, -1690,399f, 3,9549f, 0f, 1, 1, 0);
			}
			if (unk_0xB8DE76287EDC4957(iLocal_96[1], 0))
			{
				unk_0xAA93B7B448E10E40(iLocal_96[1], -1108,396f, -1690,399f, 3,9549f, 0, 0, 1);
				unk_0x47F55B6102CA9143(iLocal_96[1], -0,0466f, -0,074f, -0,4628f, 0,8822f);
				unk_0x207466E78DA21033(iLocal_96[1], 1);
			}
		}
		if (iLocal_166 != 2 || !bParam0)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_96[2]))
			{
				iLocal_96[2] = unk_0xEA60F3B426BB095B(joaat("bmx"), -1109,405f, -1688,704f, 3,7501f, 0f, 1, 1, 0);
			}
			if (unk_0xB8DE76287EDC4957(iLocal_96[2], 0))
			{
				unk_0xAA93B7B448E10E40(iLocal_96[2], -1109,405f, -1688,704f, 3,7501f, 0, 0, 1);
				unk_0x47F55B6102CA9143(iLocal_96[2], 0,0178f, 0,0525f, -0,4469f, 0,8929f);
			}
		}
		if (iLocal_166 != 3 || !bParam0)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_96[3]))
			{
				iLocal_96[3] = unk_0xEA60F3B426BB095B(joaat("tribike"), -1111,001f, -1686,629f, 3,9705f, 0f, 1, 1, 0);
			}
			if (unk_0xB8DE76287EDC4957(iLocal_96[3], 0))
			{
				unk_0xAA93B7B448E10E40(iLocal_96[3], -1111,001f, -1686,629f, 3,9705f, 0, 0, 1);
				unk_0x47F55B6102CA9143(iLocal_96[3], -0,0563f, -0,0702f, -0,5377f, 0,8383f);
			}
		}
		if ((iLocal_165 != 4 && iLocal_166 != 4) || !bParam0)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_96[4]))
			{
				iLocal_96[4] = unk_0xEA60F3B426BB095B(joaat("cruiser"), -1105,606f, -1693,98f, 3,9518f, 0f, 1, 1, 0);
			}
			if (unk_0xB8DE76287EDC4957(iLocal_96[4], 0))
			{
				unk_0xAA93B7B448E10E40(iLocal_96[4], -1105,606f, -1693,98f, 3,9518f, 0, 0, 1);
				unk_0x47F55B6102CA9143(iLocal_96[4], -0,0437f, -0,0759f, -0,4104f, 0,9077f);
				unk_0x207466E78DA21033(iLocal_96[4], 0);
				unk_0xEDC33A771FAEB393(iLocal_96[4], true);
			}
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_90))
		{
			iLocal_90 = unk_0xAC992EFAD62C33BF(26, joaat("u_m_m_bikehire_01"), vLocal_133, fLocal_147, 1, true);
		}
		unk_0x957CEE967C939968(iLocal_90);
		unk_0xAE6EBBBBD8B9FB30(iLocal_90, 17, true);
		unk_0xE17958D3FD0F9EE9(iLocal_90, 128, true);
		unk_0xE17958D3FD0F9EE9(iLocal_90, 1024, true);
		func_142(&Local_549, 4, iLocal_90, "FAM2BIKEHIRE", 0, 1);
		unk_0x771A86309E0CA47B(iLocal_90, 1);
		unk_0xCE93FCB8A8D8DF0B(iLocal_90, -2065892691);
		unk_0x5C5D33A1B2711D21(iLocal_90, false);
		unk_0xC07C87290533B90D(iLocal_90, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_96)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_96[iVar0]))
			{
				unk_0xD38F266C132F2897(iLocal_96[iVar0], true, true, true, true, true, 0, 0, 0);
			}
			iVar0++;
		}
	}
	if (bParam0)
	{
		iVar2 = 1;
		iVar3 = 0;
		while (iVar3 < iLocal_96)
		{
			if (iVar3 != iLocal_166 && iVar3 != iLocal_165)
			{
				if (!unk_0x6ADD12BF4D6D2587(iLocal_96[iVar3]))
				{
					iVar2 = 0;
				}
			}
			iVar3++;
		}
		bVar1 = iVar2;
	}
	else
	{
		bVar1 = (((((unk_0x6ADD12BF4D6D2587(iLocal_96[0]) && unk_0x6ADD12BF4D6D2587(iLocal_96[1])) && unk_0x6ADD12BF4D6D2587(iLocal_96[2])) && unk_0x6ADD12BF4D6D2587(iLocal_96[3])) && unk_0x6ADD12BF4D6D2587(iLocal_96[4])) && unk_0x6ADD12BF4D6D2587(iLocal_90));
	}
	return bVar1;
}

void func_142(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1D77B
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

void func_143(bool bParam0)//Position - 0x1D816
{
	if (!iLocal_540 && !bParam0)
	{
		if (iLocal_70 < 5)
		{
			iLocal_539 = unk_0xCB389937EDB1519A(-1120,292f, -1681,018f, 13,274f, -1081,289f, -1706,522f, 1,5344f, 0, 1, 1, 1);
			unk_0xA846A937885EB977(-1082,088f, -1714,033f, 3,285254f, -1107,201f, -1681,87f, 14,29007f, 37,5f, 0, 0, 1);
			unk_0x4C15495E88D71C61(Vector(5,919011f, -1697,383f, -1112,611f) - Vector(2,75f, 30f, 42,688f), Vector(5,919011f, -1697,383f, -1112,611f) + Vector(2,75f, 30f, 42,688f), false, 1);
			iLocal_564 = unk_0x068179DC75448F03(-1107,517f, -1692,887f, 4,374f, 4,161f, 13,858f, 4,5f, func_144(36,0244f), 0, 1);
			iLocal_540 = 1;
		}
	}
	else if (iLocal_70 >= 5 || bParam0)
	{
		unk_0xCA107A9AAF17E75F(iLocal_539, 0);
		unk_0x8A4311269B560FDF(-1082,088f, -1714,033f, 3,285254f, -1107,201f, -1681,87f, 14,29007f, 37,5f, 1);
		unk_0x4C15495E88D71C61(Vector(5,919011f, -1697,383f, -1112,611f) - Vector(2,75f, 30f, 42,688f), Vector(5,919011f, -1697,383f, -1112,611f) + Vector(2,75f, 30f, 42,688f), true, 1);
		if (unk_0xA12FA3F7428EE798(iLocal_564))
		{
			unk_0x7DC528E86B55C67E(iLocal_564);
		}
		iLocal_540 = 0;
	}
}

float func_144(float fParam0)//Position - 0x1D999
{
	return (fParam0 * 0,01745329f);
}

void func_145()//Position - 0x1D9A9
{
	int iVar0;
	int iVar1;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		iVar0 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			iVar1 = unk_0x317536BCEA8FA6B0(iVar0, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar1))
			{
				if (iVar1 != unk_0xFC1458A37D98B502())
				{
					if (unk_0x9761C10D57B68069(iVar1))
					{
						if (!unk_0xABF985A1AF8C953F(iVar1, unk_0xFC1458A37D98B502()))
						{
							unk_0x60C06BFD037BB7CF(iVar1, unk_0xFC1458A37D98B502(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_146()//Position - 0x1DA16
{
	if (iLocal_70 != 11)
	{
		iLocal_72 = iLocal_70;
		iLocal_70 = 11;
		if (unk_0xA6DECE14FC9A8C51(iLocal_102))
		{
			unk_0xE30CF11C0EE14316(&iLocal_102);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_103))
		{
			unk_0xE30CF11C0EE14316(&iLocal_103);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_104))
		{
			unk_0xE30CF11C0EE14316(&iLocal_104);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_105))
		{
			unk_0xE30CF11C0EE14316(&iLocal_105);
		}
		if (func_171())
		{
			if (!iLocal_555)
			{
				Local_556 = { func_170() };
				func_168();
				iLocal_555 = 1;
				iLocal_583 = 0;
				iLocal_585 = 0;
				iLocal_584 = unk_0x53C562FD2B9E3AB0();
			}
		}
	}
	if (iLocal_72 == 1)
	{
		func_102();
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
		{
			if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 625f)
			{
				if ((!iLocal_583 && !unk_0x23F2F89E3D1CB7C4()) && !func_171())
				{
					if (func_157(&Local_549, cLocal_202, "FAM2_WANTED", 8, 0, 0, 0))
					{
						iLocal_584 = unk_0x53C562FD2B9E3AB0();
						iLocal_583 = 1;
					}
				}
				else if ((unk_0x53C562FD2B9E3AB0() - iLocal_584) > 15000 && !func_171())
				{
					if (func_157(&Local_549, cLocal_202, "FAM2_LOSE", 8, 0, 0, 0))
					{
						iLocal_584 = unk_0x53C562FD2B9E3AB0();
					}
				}
			}
			if (func_156(iLocal_89))
			{
				if (unk_0xA6DECE14FC9A8C51(iLocal_104))
				{
					unk_0xE30CF11C0EE14316(&iLocal_104);
				}
			}
			else if (!unk_0xA6DECE14FC9A8C51(iLocal_104))
			{
				func_154();
				iLocal_104 = func_151(iLocal_89, 0, 145);
			}
			else
			{
				if (!bLocal_176 && !unk_0x23F2F89E3D1CB7C4())
				{
					func_150("FM2_JIMGB", 7500, 1);
					bLocal_176 = true;
				}
				if (func_149(iLocal_89, 300f))
				{
					func_103("FM2_JIMAB");
				}
			}
		}
	}
	else if (iLocal_72 == 8)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
		{
			if (func_156(iLocal_88))
			{
				if (unk_0xA6DECE14FC9A8C51(iLocal_104))
				{
					unk_0xE30CF11C0EE14316(&iLocal_104);
				}
			}
			else if (!unk_0xA6DECE14FC9A8C51(iLocal_104))
			{
				func_154();
				iLocal_104 = func_151(iLocal_88, 0, 145);
			}
			else
			{
				if (!bLocal_177 && !unk_0x23F2F89E3D1CB7C4())
				{
					func_150("FM2_TRAGB", 7500, 1);
					bLocal_177 = true;
				}
				if (func_149(iLocal_88, 300f))
				{
					func_103("FM2_TRAAB");
				}
			}
		}
		if (!iLocal_585)
		{
			iLocal_585 = 1;
		}
	}
	else if (!iLocal_585)
	{
		iLocal_585 = 1;
	}
	if (!func_171())
	{
		func_147(&Local_546);
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
	{
		if (!iLocal_585)
		{
			if (iLocal_72 == 1)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 625f)
					{
						if (func_157(&Local_549, cLocal_202, "FAM2_LOSTCOP", 8, 0, 0, 0))
						{
							iLocal_585 = 1;
						}
					}
				}
			}
		}
		else
		{
			iLocal_70 = iLocal_72;
			Local_546.f_1 = 0;
			unk_0x84CDD933AFA470D2();
		}
	}
}

void func_147(var uParam0)//Position - 0x1DCC0
{
	if (!uParam0->f_1)
	{
		if (!unk_0x8C1C362CA8299475(*uParam0))
		{
			func_148(*uParam0, 7500, 1);
			uParam0->f_1 = 1;
		}
	}
}

void func_148(char* sParam0, int iParam1, int iParam2)//Position - 0x1DCEB
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

int func_149(int iParam0, float fParam1)//Position - 0x1DD04
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x52C56492660097C7(iParam0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam0, 1), true) > fParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_150(char* sParam0, int iParam1, int iParam2)//Position - 0x1DD48
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 0);
}

int func_151(int iParam0, bool bParam1, int iParam2)//Position - 0x1DD61
{
	int iVar0;
	
	iVar0 = func_152(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_152(int iParam0, bool bParam1, bool bParam2)//Position - 0x1DDB3
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_153(unk_0x3A711520F83BAE98(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
		}
		else
		{
			unk_0x0C71C8E276E3EC54(iVar0, 2);
		}
	}
	else if (unk_0x52C56492660097C7(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_153(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_153(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_153(bool bParam0, float fParam1, float fParam2)//Position - 0x1DE57
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_154()//Position - 0x1DE6E
{
	Global_14622 = 0;
	func_155();
}

void func_155()//Position - 0x1DE7E
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_156(int iParam0)//Position - 0x1DE9F
{
	if (unk_0x4759A34EB65CCA39(iParam0, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
	{
		if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0x7131D749AB034F94(iLocal_89, 0, 1, 0, 0, 0, 0, 1, -1))
			{
				unk_0x88235B448509228B(iParam0);
			}
		}
		return 1;
	}
	else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0x57FB41CABA25835C(iParam0, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4()));
	}
	if (unk_0x7131D749AB034F94(iParam0, 0, 1, 0, 0, 0, 0, 1, -1))
	{
	}
	if (unk_0x7131D749AB034F94(iParam0, 0, 1, 0, 0, 0, 0, 0, -1))
	{
	}
	return 0;
}

bool func_157(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1DF4B
{
	func_167(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_158(sParam2, iParam3, 0);
}

int func_158(char* sParam0, int iParam1, bool bParam2)//Position - 0x1DF99
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xB31CEFB00C146C91(false);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_166();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_165(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_164();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_163();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_162())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
				}
			}
			if (func_161())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_160();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_159();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_166();
	}
	return 0;
}

void func_159()//Position - 0x1E265
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(false);
	Global_15756 = 1;
}

void func_160()//Position - 0x1E296
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_161()//Position - 0x1E32B
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_162()//Position - 0x1E352
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_163()//Position - 0x1E3EB
{
	if (func_27(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_136();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

void func_164()//Position - 0x1E48D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_165(int iParam0, int iParam1)//Position - 0x1E4E4
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

void func_166()//Position - 0x1E51F
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(true);
		Global_15756 = 6;
		return;
	}
}

void func_167(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1E576
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_168()//Position - 0x1E5CC
{
	Global_14622 = 0;
	func_169();
}

void func_169()//Position - 0x1E5DC
{
	if (unk_0x42111BD51D233AAB())
	{
		unk_0x495EB1DD7306493A();
		Global_16767 = 0;
		unk_0xB31CEFB00C146C91(true);
		Global_15756 = 6;
		return;
	}
}

struct<6> func_170()//Position - 0x1E600
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar1 = unk_0xA2F80D03C2F3570D();
		iVar1 = (iVar1 + Global_16766);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xA1800C71952C596F(&(Global_14624[iVar2 /*6*/])))
			{
				return Global_14624[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xA1800C71952C596F(&(Global_14624[iVar3 /*6*/])))
					{
						return Global_14624[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_14624[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_171()//Position - 0x1E6AC
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_172()//Position - 0x1E6CE
{
	if (unk_0x3E9CABD07B829173())
	{
		unk_0x4FB260623DD93924(0, 199, 1);
	}
	switch (iLocal_159)
	{
		case 0:
			unk_0x1B5A255BF0D63005("HoldMissionCompleteWhenPrepared", 1);
			unk_0x36905B9EE07F38CC();
			unk_0x6450931B826B49D9("missfam2_pier");
			unk_0x6FF834D85E2DD4C6(joaat("prop_cigar_01"));
			unk_0x6FF834D85E2DD4C6(joaat("cruiser"));
			if (!unk_0x6C97EEC6339FB45C())
			{
				if (bLocal_174)
				{
					unk_0x393584863A2F304E("family_2_mcs_4", 8);
				}
				else
				{
					unk_0x79E39A06DE88EFE2("family_2_mcs_4", 2, 8);
				}
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			break;
		
		case 1:
			if (unk_0x8AD07B6FC24F47C4())
			{
				func_2("Michael", unk_0xFC1458A37D98B502(), 0, 2);
				unk_0x6A39A6ADDC38ABE4("Tracy", iLocal_88, 0);
				unk_0x7B9E2A8E7B7BA218("Tracy", 1, 1, 0, 0);
				unk_0x7B9E2A8E7B7BA218("Tracy", 0, 0, 0, 0);
				if (unk_0x771D0F8F56A5FE6C("FAMILY_2_JETSKI_GO_TO_BEACH"))
				{
					unk_0xE02E32C69260FBB7("FAMILY_2_JETSKI_GO_TO_BEACH");
				}
				iLocal_159++;
			}
			break;
		
		case 2:
			func_2("Michael", unk_0xFC1458A37D98B502(), 0, 2);
			unk_0x6A39A6ADDC38ABE4("Tracy", iLocal_88, 0);
			unk_0x7B9E2A8E7B7BA218("Tracy", 1, 1, 0, 0);
			unk_0x7B9E2A8E7B7BA218("Tracy", 0, 0, 0, 0);
			if (func_193())
			{
				func_154();
				func_185(1, 1, 1, 0);
				if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
				{
					unk_0xA15269351F50F113(iLocal_92, false, 1, 0);
					unk_0x4982ECE0928DA13D(iLocal_92, "Michaels_seashark", 0, 0, 0);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
				{
					unk_0x4982ECE0928DA13D(iLocal_88, "Tracy", 0, 0, 0);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
				{
					unk_0x4982ECE0928DA13D(iLocal_89, "Jimmy", 0, 0, 0);
				}
				unk_0x84CDD933AFA470D2();
				unk_0x3E80C2F7BC665259(1);
				func_154();
				unk_0x8810DC630928B398("FAM2_COMPLETE");
				unk_0xD0BFA95B279C174F(0);
				unk_0x0662098C9EF126B4(4);
				unk_0x6450931B826B49D9("missfam2_pier");
				unk_0x6FF834D85E2DD4C6(joaat("prop_cigar_01"));
				unk_0x6FF834D85E2DD4C6(joaat("cruiser"));
				func_184();
				iLocal_159++;
			}
			break;
		
		case 3:
			if (!unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
			{
				unk_0x59C3AC31C7544A28(500);
			}
			unk_0xF4A2B3ABAFAEF9EE(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 100f);
			func_183(1, 1);
			unk_0x1B5A255BF0D63005("AvoidMissionCompleteDelay", 0);
			iLocal_159++;
			break;
		
		case 4:
			if (unk_0xBBC745B9F75E27D0("MICHAEL", 0))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
				{
					unk_0xACE486395AA1867D(iLocal_92, 1084227584);
					unk_0xB8D9F55BA414128D(iLocal_92, 0, 0f, 0f, 0,1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_89))
				{
					unk_0x68433819717660CF(&iLocal_89);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_88))
				{
					unk_0x68433819717660CF(&iLocal_88);
				}
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1607,251f, -1138,103f, 1,1443f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 262,2968f);
			}
			unk_0x79B05894D06FFAF8(1,5f);
			if (unk_0x3E9CABD07B829173() && unk_0xCE083D214C9DBEF1())
			{
				system::settimera(0);
				unk_0xAE83ED4C9081AE6F(0);
			}
			if (unk_0x6C97EEC6339FB45C())
			{
				if (unk_0xE57A999388F7FD02() > 31400)
				{
					if (!unk_0x2D0EF1D268F33F25() && !unk_0x3E9CABD07B829173())
					{
						unk_0xAE83ED4C9081AE6F(1500);
					}
					unk_0x4FB260623DD93924(0, 18, 1);
				}
			}
			if (!unk_0x6C97EEC6339FB45C())
			{
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				func_185(0, 1, 1, 0);
				func_182();
				if (!unk_0x2D0EF1D268F33F25() && !unk_0x3E9CABD07B829173())
				{
					unk_0xAE83ED4C9081AE6F(500);
				}
				unk_0x61635C0A7950C875();
				iLocal_159++;
			}
			break;
		
		case 5:
			if (unk_0x3E9CABD07B829173() && !unk_0x2D0EF1D268F33F25())
			{
				unk_0x8810DC630928B398("FAM2_STOP");
				if (unk_0x6ADD12BF4D6D2587(iLocal_95))
				{
					func_435(iLocal_95, -1060,518f, -1691,88f, 3,5097f, 185,4265f, 24, 0);
				}
				unk_0x874939B0BA18B8E6(unk_0xFC1458A37D98B502(), 0);
				unk_0x874939B0BA18B8E6(unk_0xFC1458A37D98B502(), 3);
				unk_0x874939B0BA18B8E6(unk_0xFC1458A37D98B502(), 2);
				while (!func_370(0, 1))
				{
					system::wait(0);
					unk_0x4FB260623DD93924(0, 199, 1);
				}
				system::settimera(0);
				unk_0x990A0EC8D6FEA4BB("smboat");
				iLocal_159 = 100;
			}
			break;
		
		case 100:
			unk_0x36905B9EE07F38CC();
			func_180(-1850,139f, -1250,253f, 8,59f, -120,1799f, 1);
			unk_0x6450931B826B49D9("missfam2_pier");
			unk_0x6FF834D85E2DD4C6(joaat("prop_cigar_01"));
			unk_0x6FF834D85E2DD4C6(joaat("cruiser"));
			while ((!unk_0x3A801AA34DD821BE("missfam2_pier") || !unk_0x9A0B2ED5055D3F0B(joaat("prop_cigar_01"))) || !unk_0x9A0B2ED5055D3F0B(joaat("cruiser")))
			{
				system::wait(0);
				unk_0x4FB260623DD93924(0, 199, 1);
			}
			unk_0x1B5A255BF0D63005("HoldMissionCompleteWhenPrepared", 0);
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1850,139f, -1250,253f, 8,59f, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 134,28f);
			iLocal_208 = unk_0xEA60F3B426BB095B(joaat("cruiser"), -1846,573f, -1214,731f, 12,5755f, 0f, 1, 1, 0);
			unk_0x47F55B6102CA9143(iLocal_208, -0,0155f, -0,0834f, -0,306f, 0,9483f);
			unk_0xACE486395AA1867D(iLocal_208, 1084227584);
			unk_0xB485B73829833C84(unk_0xFC1458A37D98B502());
			iLocal_207 = unk_0x5E35CF35E65D69B9(joaat("prop_cigar_01"), -1850,139f, -1250,253f, 8,59f, 1, true, 0);
			unk_0xA9D382E7BA095148(iLocal_207, unk_0xFC1458A37D98B502(), unk_0xDD09837E5235FE91(unk_0xFC1458A37D98B502(), 28422), 0f, 0f, 0f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
			unk_0x1E3116EEB28D5F17("cs_cig_smoke", iLocal_207, 0,05f, 0f, 0f, 0f, 0f, 90f, 1f, 0, 0, 0);
			iLocal_206 = unk_0x03F9D5EC835EE606(26379945, 1);
			unk_0xA6DE0FBA9218D7F0(iLocal_206, -1852,002f, -1250,224f, 8,9706f, -3,6975f, 0f, -120,1799f, 45f, 0, 1, 1, 2);
			unk_0xA6DE0FBA9218D7F0(iLocal_206, -1852,087f, -1250,395f, 8,9706f, -1,3266f, 0f, -102,4498f, 45f, 10000, 1, 1, 2);
			unk_0xF0E859A5278D3AA0(true, 0);
			if (unk_0x8F38E94BBF3404CD(unk_0x8B948C59217A295D("mission_stat_watcher")) > 0)
			{
				func_183(1, 1);
				while (!Global_71116)
				{
					system::wait(0);
					unk_0x4FB260623DD93924(0, 199, 1);
				}
				while (Global_71116)
				{
					system::wait(0);
					unk_0x4FB260623DD93924(0, 199, 1);
				}
			}
			else
			{
				system::wait(3000);
			}
			unk_0x60225D4F755DFDB1(-1850,15f, -1250,253f, 8,625f, 5f, 0);
			iLocal_205 = unk_0x8383F9C605E523B7(-1850,15f, -1250,253f, 8,625f, 0f, 0f, 134,28f, 2);
			unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_205, "missfam2_pier", "pier_lean_toss_cigarette", 1000f, -4f, 0, 0, 1148846080, 0);
			unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
			system::settimera(0);
			unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
			if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
			}
			if (!unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
			{
				unk_0x59C3AC31C7544A28(1500);
			}
			iLocal_159++;
			break;
		
		case 101:
			if (unk_0xD56F740235B1E8F0(iLocal_205) && unk_0x463C4747B41E35A3(iLocal_205) > 0,227f)
			{
				unk_0x2483C81F4B2C857B("cs_cig_exhale_nose", unk_0xFC1458A37D98B502(), -0,025f, 0,12f, 0f, 0f, 90f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_159++;
			}
			break;
		
		case 102:
			if (unk_0xD56F740235B1E8F0(iLocal_205) && unk_0x463C4747B41E35A3(iLocal_205) > 0,563f)
			{
				unk_0xA6DE0FBA9218D7F0(iLocal_206, unk_0x358591F279CE2987(iLocal_206), unk_0xA6EB123F0C0560D9(iLocal_206, 2), unk_0xD63C87A79D8F4A4E(iLocal_206), 0, 1, 1, 2);
				if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) != 4)
				{
					unk_0xA6DE0FBA9218D7F0(iLocal_206, -1852,922f, -1252,698f, 9,3524f, -2,9046f, 0f, -46,5763f, 50f, 4000, 1, 1, 2);
				}
				else
				{
					unk_0xA6DE0FBA9218D7F0(iLocal_206, -1851,685f, -1251,438f, 9,3524f, -0,0547f, 0,0543f, -38,2308f, 50f, 4000, 1, 1, 2);
				}
				iLocal_159++;
			}
			break;
		
		case 103:
			if (unk_0x6ADD12BF4D6D2587(iLocal_207) && unk_0xDFFD5F8C8ABCB7EF(iLocal_207))
			{
				if (unk_0x463C4747B41E35A3(iLocal_205) > 0,711f)
				{
					unk_0x6B7C10B19928914F(iLocal_207, 1, 1);
					unk_0xD91B0600CD72C5F7(iLocal_207, Vector(8,3737f, -1250,913f, -1852,43f) - Vector(9,2628f, -1250,44f, -1850,899f));
				}
			}
			if (unk_0xD56F740235B1E8F0(iLocal_205) && unk_0x463C4747B41E35A3(iLocal_205) > 0,768f)
			{
				unk_0x2483C81F4B2C857B("cs_cig_exhale_mouth", unk_0xFC1458A37D98B502(), -0,025f, 0,13f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_159++;
			}
			break;
		
		case 104:
			if (unk_0xD56F740235B1E8F0(iLocal_205) && unk_0x463C4747B41E35A3(iLocal_205) > 0,7116f)
			{
				unk_0x2483C81F4B2C857B("cs_cig_exhale_mouth", unk_0xFC1458A37D98B502(), -0,025f, 0,13f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				func_179(&uLocal_521, unk_0xFC1458A37D98B502(), 0, 1069547520, 1000, 1000, 700, 0, 1045220557);
				iLocal_159++;
			}
			break;
		
		case 105:
			if (unk_0xD56F740235B1E8F0(iLocal_205))
			{
				if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
				{
					if (unk_0x8EA3C8E091EA5BA4(iLocal_206))
					{
						if (unk_0x463C4747B41E35A3(iLocal_205) > 0,85f && func_175(&uLocal_521, 0, 1, 1, 0, 0, 0))
						{
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
							if (unk_0x8EA3C8E091EA5BA4(iLocal_206))
							{
								unk_0xBB9A3C553EECB180(0f);
								unk_0x7C9705890EF6612E(0f, 1065353216);
								unk_0x3458550DF8E9B453(false, true, 1000, 1, 0, 0);
								unk_0x02934BABFD4CD384(iLocal_206, 0);
							}
						}
					}
				}
				if (unk_0x463C4747B41E35A3(iLocal_205) > 0,98f)
				{
					if (unk_0x8EA3C8E091EA5BA4(iLocal_206))
					{
						unk_0xBB9A3C553EECB180(0f);
						unk_0x7C9705890EF6612E(0f, 1065353216);
						unk_0x3458550DF8E9B453(false, true, 1000, 1, 0, 0);
						unk_0x02934BABFD4CD384(iLocal_206, 0);
					}
					unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					unk_0xF0E859A5278D3AA0(false, 100);
					if (unk_0x6ADD12BF4D6D2587(iLocal_207))
					{
						unk_0x452336926718D62A(&iLocal_207);
					}
					system::settimera(0);
					iLocal_159++;
				}
			}
			break;
		
		case 106:
			if (system::timera() > 100)
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				func_173(0, 0);
				func_573();
			}
			break;
	}
}

void func_173(bool bParam0, int iParam1)//Position - 0x1F09F
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55905)
	{
		Global_55905 = iParam1;
	}
	if (bParam0)
	{
		if ((func_139(0) && Global_71102.f_1 == 1) && func_174(Global_71102))
		{
		}
		else
		{
			Global_55903 = 1;
		}
	}
	if (Global_104555.f_9055 || func_139(0))
	{
		iVar0 = func_138();
		iVar1 = Global_83730[iVar0 /*5*/];
		uVar2 = Global_71125.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_104555.f_9055)
			{
			}
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 4);
		unk_0x872F1C1F8587CCC7(&Global_71104, 1);
		Global_71120 = uVar2;
		Global_71121 = unk_0x53C562FD2B9E3AB0();
	}
}

int func_174(int iParam0)//Position - 0x1F175
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_175(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x1F1B3
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_177();
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_5, 0))
			{
				func_176(uParam0);
				vVar0 = { unk_0x9D1DE9B1332BAA49() };
				if (bParam1)
				{
					vVar0 = { vVar0 + unk_0x8FD9FCCB6E4BD999(uParam0->f_5) * FtoV(unk_0x46C19C2753391FBF()) };
				}
				vVar1 = { unk_0xA05DDB968587006B(uParam0->f_5, vVar0) };
				vVar2 = { unk_0x605382E133586F48(2) };
				vVar3 = { vVar2 + uParam0->f_9 };
				vVar4 = { vVar3 - unk_0xDB824D597B53CC40(uParam0->f_5, 2) };
				vVar5 = { (-system::sin(vVar3.z) * system::cos(vVar3.x)), (system::cos(vVar3.z) * system::cos(vVar3.x)), system::sin(vVar3.x) };
				vVar6 = { (-system::sin(vVar4.z) * system::cos(vVar4.x)), (system::cos(vVar4.z) * system::cos(vVar4.x)), system::sin(vVar4.x) };
				fVar7 = unk_0xEA5D4E8111902D6B();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x03F9D5EC835EE606(1775630800, 0);
				}
				uParam0->f_1 = unk_0x03F9D5EC835EE606(26379945, 1);
				if (bParam1)
				{
					unk_0x1F2D9CBE337F9DB2(uParam0->f_1, uParam0->f_5, vVar1, 1);
				}
				else
				{
					unk_0xA215B2F25E63FA31(uParam0->f_1, vVar0);
				}
				unk_0xBEBD5CAE3510CD2A(uParam0->f_1, vVar2, 2);
				unk_0xE43C573FE3C5D758(uParam0->f_1, fVar7);
				uParam0->f_2 = unk_0x03F9D5EC835EE606(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x1F2D9CBE337F9DB2(uParam0->f_2, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xA215B2F25E63FA31(uParam0->f_2, vVar0 + vVar5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xBEBD5CAE3510CD2A(uParam0->f_2, vVar2, 2);
				unk_0xE43C573FE3C5D758(uParam0->f_2, fVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x03F9D5EC835EE606(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x1F2D9CBE337F9DB2(uParam0->f_4, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xA215B2F25E63FA31(uParam0->f_4, vVar0 + vVar5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xBEBD5CAE3510CD2A(uParam0->f_4, vVar2, 2);
					unk_0xE43C573FE3C5D758(uParam0->f_4, fVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x6732DB0053C5E803(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x6732DB0053C5E803(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x6732DB0053C5E803(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x6ED5DDE95A2ACDCB(uParam0->f_3, iParam6);
					unk_0x7849794435F39D49(uParam0->f_3, true);
				}
				else
				{
					unk_0xF10DA1539629CC3F(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_177();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xA91E83FF512776B6("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0xA91E83FF512776B6("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0xA91E83FF512776B6("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
						}
						unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_176(uParam0);
					unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_176(var uParam0)//Position - 0x1F556
{
	if (unk_0x8EA3C8E091EA5BA4(uParam0->f_1))
	{
		unk_0x02934BABFD4CD384(uParam0->f_1, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(uParam0->f_2))
	{
		unk_0x02934BABFD4CD384(uParam0->f_2, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(uParam0->f_3))
	{
		unk_0x02934BABFD4CD384(uParam0->f_3, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(uParam0->f_4))
	{
		unk_0x02934BABFD4CD384(uParam0->f_4, 0);
	}
}

void func_177()//Position - 0x1F5AE
{
	unk_0x9B16F08390FCC31C();
	func_178();
}

void func_178()//Position - 0x1F5BE
{
	Global_17162.f_134 = 1;
}

void func_179(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1F5CC
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

void func_180(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x1F604
{
	int iVar0;
	
	if (!func_181())
	{
		unk_0x593C7101945C1D9E(vParam0, 0f, 0f, 0f);
		unk_0xDCBF71199890F355(vParam0, system::cos((fParam1 + 90f)), system::sin((fParam1 + 90f)), 0f, 25f, 0);
		system::settimera(0);
		iVar0 = unk_0x53C562FD2B9E3AB0();
		while (!unk_0x64D098EABB2F6F13() && (unk_0x53C562FD2B9E3AB0() - iVar0) < 12000)
		{
			system::wait(0);
		}
		if (bParam2)
		{
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vParam0, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), fParam1);
		}
		unk_0x97580242FB655BD5();
		unk_0x81BCCFFE3F019672();
	}
}

bool func_181()//Position - 0x1F699
{
	return unk_0xC80D31E4B587871C(Global_92833.f_20, 13);
}

void func_182()//Position - 0x1F6AD
{
	Global_55909 = 0;
}

void func_183(int iParam0, int iParam1)//Position - 0x1F6B9
{
	Global_71124 = iParam1;
	if (Global_55897)
	{
		return;
	}
	if (Global_55924)
	{
		Global_55924 = 0;
		return;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_55897)
		{
		}
		Global_55923 = iParam0;
		Global_55897 = 1;
		Global_55908 = 1;
	}
}

void func_184()//Position - 0x1F703
{
	Global_55909 = 1;
}

void func_185(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1F70F
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_192(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_161())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_191(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_192(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_191(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_189(unk_0x9EB17624F44A8DA4())) && !func_187(unk_0x9EB17624F44A8DA4(), 0)) && !func_186())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_189(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_186()//Position - 0x1F828
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_187(int iParam0, int iParam1)//Position - 0x1F845
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_188(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_188(int iParam0, bool bParam1)//Position - 0x1F890
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_189(int iParam0)//Position - 0x1F8D1
{
	if (func_187(iParam0, 0))
	{
		return 1;
	}
	if (func_190())
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return 1;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_190()//Position - 0x1F913
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_191(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1F924
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && uParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_192(int iParam0)//Position - 0x1F957
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 13);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 13);
	}
}

bool func_193()//Position - 0x1F97A
{
	bool bVar0;
	
	bVar0 = unk_0xA3DDC3767EC660CD();
	if (!Global_70855)
	{
		if (!bVar0)
		{
			Global_70855 = 1;
		}
	}
	return bVar0;
}

void func_194()//Position - 0x1F99D
{
	bool bVar0;
	bool bVar1;
	
	unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
	{
		if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_209) < 10f)
		{
			unk_0x4FB260623DD93924(0, 22, 1);
		}
		if (iLocal_159 < 100)
		{
			if (func_211(&iLocal_92, &uLocal_151, &iLocal_152) || !unk_0xB8DE76287EDC4957(iLocal_92, 0))
			{
				iLocal_159 = 100;
			}
		}
		if (!unk_0x771D0F8F56A5FE6C("FAMILY_2_JETSKI_GO_TO_BEACH"))
		{
			unk_0xE859EF37EA7362D3("FAMILY_2_JETSKI_GO_TO_BEACH");
		}
		switch (iLocal_159)
		{
			case 0:
				if ((!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
				{
					if (!unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
					{
						unk_0x59C3AC31C7544A28(500);
					}
					if (!unk_0x771D0F8F56A5FE6C("FAMILY_2_JETSKI_GO_TO_BEACH"))
					{
						unk_0xE859EF37EA7362D3("FAMILY_2_JETSKI_GO_TO_BEACH");
					}
					Local_545.f_1 = 0;
					iLocal_630 = 0;
					fLocal_631 = 0f;
					iLocal_170 = 0;
					iLocal_178 = 0;
					iLocal_159++;
					if (iLocal_155)
					{
						iLocal_159 = -1;
					}
				}
				break;
			
			case -1:
				unk_0xBC469A15B0FBB2B3("smboat");
				while (!unk_0xAB84FBE3AB3FFAD3("smBoat"))
				{
					unk_0x48D75120C879E65E("M_DaddysLittleGirl", 0);
					system::wait(0);
				}
				iLocal_159 = 1;
				break;
			
			case 1:
				func_208(&iLocal_92, &iLocal_105, vLocal_119, &iLocal_102, &Local_545);
				if (!func_171() && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
				{
					unk_0x1267474D9A69CA37(5f, 5f, 4);
					unk_0xCB3D88C918AA637C(iLocal_88);
					unk_0xD38F266C132F2897(iLocal_92, false, false, false, false, false, 0, 0, 0);
					unk_0x94BD6F0436473406(0,2f);
					if (!iLocal_155)
					{
						func_148("FM2_DRIVE", 5000, 1);
					}
					system::settimera(0);
					if (iLocal_155)
					{
						iLocal_159 = -2;
					}
					else
					{
						iLocal_159++;
					}
				}
				break;
			
			case -2:
				func_208(&iLocal_92, &iLocal_105, vLocal_119, &iLocal_102, &Local_545);
				if (func_157(&Local_549, cLocal_202, "FAM2_TALK1", 8, 0, 0, 0))
				{
					iLocal_155 = 0;
					iLocal_159 = -3;
				}
				break;
			
			case -3:
				func_208(&iLocal_92, &iLocal_105, vLocal_119, &iLocal_102, &Local_545);
				if (!func_171())
				{
					system::settimera(0);
					func_148("FM2_DRIVE", 5000, 1);
					iLocal_159 = 2;
				}
				break;
			
			case 2:
				if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
				{
					if (system::timera() > 5000 || (system::timera() > 2000 && unk_0x496616BFA56C89EB(203) == 0))
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0) && !func_171())
						{
							if (!unk_0x013B3F0AF8FD2A6A(iLocal_88, unk_0xFC1458A37D98B502()))
							{
								unk_0x60C06BFD037BB7CF(iLocal_88, unk_0xFC1458A37D98B502(), -1, 16, 2);
							}
							iLocal_186 = unk_0x53C562FD2B9E3AB0();
							iLocal_518 = 0;
							iLocal_519 = 0;
							iLocal_554 = 0;
							iLocal_555 = 0;
							iLocal_159++;
						}
					}
					func_208(&iLocal_92, &iLocal_105, vLocal_119, &iLocal_102, &Local_545);
				}
				break;
			
			case 3:
				bVar0 = ((unk_0xB8DE76287EDC4957(iLocal_92, 0) && unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0)) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0));
				switch (iLocal_630)
				{
					case 0:
						if (!bLocal_191 && !bLocal_193)
						{
							if (func_207())
							{
								func_205("FAM2_TALK2", bVar0);
							}
							else
							{
								func_205("FAM2_TALK2b", bVar0);
							}
						}
						else
						{
							func_205("FAM2_KILTALK", bVar0);
						}
						if ((!func_171() && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0)) && !iLocal_555)
						{
							iLocal_554 = 0;
							iLocal_555 = 0;
							unk_0xCB3D88C918AA637C(iLocal_88);
							iLocal_630++;
						}
						break;
					
					case 1:
						if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_118) > 10000f)
						{
							if (((unk_0xB8DE76287EDC4957(iLocal_92, 0) && unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0)) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0)) && unk_0x90D5DFB054818BA7(iLocal_92) < 5f)
							{
								fLocal_631 = (fLocal_631 + unk_0x46C19C2753391FBF());
							}
							else if (fLocal_631 > 0f)
							{
								fLocal_631 = (fLocal_631 - (unk_0x46C19C2753391FBF() * 5f));
							}
						}
						if (fLocal_631 > 10f)
						{
							if (func_157(&Local_549, cLocal_202, "FAM2_GOBACK", 8, 0, 0, 0))
							{
								fLocal_631 = 0f;
							}
						}
						if (!bLocal_191 && !bLocal_193)
						{
						}
						break;
				}
				func_204();
				if (!unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0))
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_88, -1794415470) != 1)
					{
						unk_0x6F8C8278B7C06889(iLocal_88, iLocal_92, 20000, 0, 2f, 1, 0);
					}
				}
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
				{
					if (!unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0))
					{
						if (!unk_0xA6DECE14FC9A8C51(iLocal_104))
						{
							unk_0x84CDD933AFA470D2();
							func_154();
							if (!bLocal_177)
							{
								func_150("FM2_WAIT2", 7500, 1);
								bLocal_177 = true;
							}
							iLocal_104 = func_151(iLocal_88, 0, 145);
						}
						if (unk_0xA6DECE14FC9A8C51(iLocal_102))
						{
							unk_0xE30CF11C0EE14316(&iLocal_102);
						}
					}
					else if (unk_0xA6DECE14FC9A8C51(iLocal_104))
					{
						unk_0xE30CF11C0EE14316(&iLocal_104);
					}
					if (func_211(&iLocal_92, &uLocal_151, &iLocal_152))
					{
						if (system::vdist(unk_0xB3328BA8976B416C(iLocal_92, 1), vLocal_119) < 50f)
						{
							bVar1 = true;
						}
					}
					if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_140, vLocal_141, fLocal_142, 0, 1, 0) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_119 + Vector(0,3f, 0f, 0f), 1f, 1f, 2,5f, 1, 1, 0)) && unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_92))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						unk_0xE30CF11C0EE14316(&iLocal_102);
						bLocal_174 = true;
						iLocal_159++;
					}
				}
				if (!bVar1)
				{
					if (func_211(&iLocal_92, &uLocal_151, &iLocal_152) || !unk_0xB8DE76287EDC4957(iLocal_92, 0))
					{
						iLocal_159 = 100;
					}
					else if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_118) < 10000f)
					{
						if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
						{
							if (unk_0x20D66D71CF476CDB(iLocal_88) < 2f)
							{
								iLocal_159 = 100;
							}
						}
					}
				}
				if (iLocal_159 < 100)
				{
					func_208(&iLocal_92, &iLocal_105, vLocal_119, &iLocal_102, &Local_545);
				}
				break;
			
			case 4:
				func_168();
				if (func_202(iLocal_92, 5f, 1, 1056964608, 0, 1, 0) || !unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_92))
				{
					func_168();
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 256);
					iLocal_159++;
				}
				break;
			
			case 5:
				if (!func_171())
				{
					unk_0x1267474D9A69CA37(4f, 3f, 4);
					func_201(9);
				}
				break;
			
			case 100:
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_118) < system::pow(100f, 2f))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
					{
						unk_0x3E80C2F7BC665259(1);
						Local_556 = { func_170() };
						func_154();
						iLocal_555 = 1;
						unk_0xE30CF11C0EE14316(&iLocal_102);
						sLocal_201 = "family_2_mcs_4p2";
						iLocal_178 = 0;
						iLocal_519 = 0;
						unk_0xA6C03E3E2533F8F3();
						unk_0x79E39A06DE88EFE2("family_2_mcs_4", 2, 8);
						system::settimera(0);
						if (unk_0xA6DECE14FC9A8C51(iLocal_105))
						{
							unk_0xE30CF11C0EE14316(&iLocal_105);
						}
						iLocal_102 = func_151(iLocal_89, 0, 145);
						func_148("FM2_ONFOOT", 7500, 1);
						if (!unk_0x4759A34EB65CCA39(iLocal_88, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
						{
							unk_0x57FB41CABA25835C(iLocal_88, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4()));
							unk_0xF6A83791895D5AA1(iLocal_88, 0);
						}
						bLocal_177 = false;
						iLocal_159++;
					}
				}
				else if (unk_0x191BE1BC8F26F3C1(iLocal_92, 0))
				{
					func_103("FM2_SKIDED");
				}
				else
				{
					func_103("FM2_SKIGRN");
				}
				break;
			
			case 101:
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
				{
					if (func_156(iLocal_88))
					{
						if (!unk_0xA6DECE14FC9A8C51(iLocal_102))
						{
							iLocal_102 = func_151(iLocal_89, 0, 145);
						}
						if (unk_0xA6DECE14FC9A8C51(iLocal_104))
						{
							unk_0xE30CF11C0EE14316(&iLocal_104);
						}
						if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_89, 1)) < 30f)
						{
							system::settimera(0);
							iLocal_159++;
						}
					}
					else
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_102))
						{
							unk_0xE30CF11C0EE14316(&iLocal_102);
						}
						if (!unk_0xA6DECE14FC9A8C51(iLocal_104))
						{
							if (!bLocal_177)
							{
								func_150("FM2_TRAGB", 7500, 1);
							}
							iLocal_104 = func_151(iLocal_88, 0, 145);
						}
					}
				}
				if (!bLocal_191 && !bLocal_193)
				{
					bVar0 = false;
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (!unk_0x88DDBE9908752BF0(iLocal_88, 0) && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_88, 1)) < 400f)
						{
							bVar0 = true;
						}
					}
					else if (unk_0x88DDBE9908752BF0(iLocal_88, 0) && unk_0xDFD115BB10FE46A9(iLocal_88, 0) == unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))
					{
						bVar0 = true;
					}
				}
				break;
			
			case 102:
				if (system::timera() > 1000)
				{
					bLocal_174 = false;
					iLocal_159++;
				}
				break;
			
			case 103:
				func_168();
				if (!func_171())
				{
					func_201(9);
				}
				break;
		}
		if (iLocal_159 > 0)
		{
			func_198(9);
		}
		func_94(sLocal_201, vLocal_118, 100f, &iLocal_178);
		if (iLocal_178)
		{
			if (!iLocal_519)
			{
				if (unk_0x8AD07B6FC24F47C4())
				{
					func_2("Michael", unk_0xFC1458A37D98B502(), 0, 2);
					unk_0x6A39A6ADDC38ABE4("Tracy", iLocal_88, 0);
					unk_0x7B9E2A8E7B7BA218("Tracy", 1, 1, 0, 0);
					unk_0x7B9E2A8E7B7BA218("Tracy", 0, 0, 0, 0);
					iLocal_519 = 1;
				}
			}
		}
		if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
		{
			if (!func_171() && (unk_0x53C562FD2B9E3AB0() - iLocal_169) > 7500)
			{
				func_196(iLocal_88, "GENERIC_SHOCKED_MED", "Tracey", 3);
				iLocal_169 = unk_0x53C562FD2B9E3AB0();
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
		{
			if (!iLocal_518)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 5625f && system::vdist2(unk_0xB3328BA8976B416C(iLocal_88, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 225f)
					{
						func_168();
						if (!func_171())
						{
							if (func_157(&Local_549, cLocal_202, "FAM2_SEES", 8, 0, 0, 0))
							{
								iLocal_518 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_170)
		{
			case 0:
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_118) < 90000f)
				{
					if (!unk_0x9E06F0EE20F58CED(vLocal_118, 5f))
					{
						unk_0x247EAA2E93D4A021(vLocal_118, 4f, 1, 0, 0, false);
						if (!unk_0x6ADD12BF4D6D2587(iLocal_89))
						{
							func_195(&iLocal_89, 14, vLocal_118, fLocal_148);
						}
						iLocal_170 = 2;
					}
					else
					{
						if (!unk_0x6ADD12BF4D6D2587(iLocal_89))
						{
							func_195(&iLocal_89, 14, -1611,595f, -1121,009f, 1,544f, 42,8275f);
						}
						iLocal_170++;
					}
				}
				break;
			
			case 1:
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
				{
					unk_0x771A86309E0CA47B(iLocal_89, 1);
					unk_0x380C1E7B7740D618(iLocal_89, vLocal_118, 1f, -1, 0,25f, 512, fLocal_148);
					iLocal_170++;
				}
				break;
			
			case 2:
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89) && unk_0x0C88267282FD588F(iLocal_89, vLocal_118, Global_22, 0, 1, 0))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < system::pow(200f, 2f))
					{
						if (!unk_0xCA3C40448996C9BA(iLocal_89, unk_0xFC1458A37D98B502(), 60f))
						{
							if (unk_0x78F50AA8F955BEFC(iLocal_89, 242628503) != 1)
							{
								unk_0xB8E08BD5B184DF4E(iLocal_89);
								unk_0x60C06BFD037BB7CF(iLocal_89, unk_0xFC1458A37D98B502(), -1, 16, 2);
								unk_0x6931076730A4AC5D(&uLocal_520);
								unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
								unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 16, 2);
								unk_0x1B16DD5C115FE009(uLocal_520);
								unk_0xAB30B1CF01A198C1(iLocal_89, uLocal_520);
								unk_0xFAA3EF7FF92E1F9E(&uLocal_520);
							}
						}
						else if (unk_0x78F50AA8F955BEFC(iLocal_89, 242628503) != 1)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
							{
								unk_0x60C06BFD037BB7CF(iLocal_89, unk_0xFC1458A37D98B502(), -1, 16, 2);
							}
						}
					}
				}
				break;
		}
		if (iLocal_70 != 8)
		{
			if (unk_0x771D0F8F56A5FE6C("FAMILY_2_JETSKI_GO_TO_BEACH"))
			{
				unk_0xE02E32C69260FBB7("FAMILY_2_JETSKI_GO_TO_BEACH");
			}
		}
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
		{
			func_146();
		}
	}
}

void func_195(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x20518
{
	if (!unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (iParam1 == 15)
		{
			while (!func_95(vParam2, fParam3))
			{
				system::wait(0);
			}
		}
		else
		{
			while (!func_458(vParam2, fParam3))
			{
				system::wait(0);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
		{
			unk_0xB8E08BD5B184DF4E(*iParam0);
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
	{
		unk_0xBD8D47FDC6902B2D(*iParam0, vParam2, 1, false, 0, 1);
		unk_0x48ED7B2293A96722(*iParam0, fParam3);
	}
}

void func_196(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x20599
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_197(iParam3), 0);
}

int func_197(int iParam0)//Position - 0x205B2
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_198(int iParam0)//Position - 0x207A7
{
	int iVar0;
	int iVar1[10];
	int iVar2[3];
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar2[iVar0] = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("cruiser");
			iVar1[3] = func_199(15, 1);
			break;
		
		case 2:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("u_m_m_bikehire_01");
			iVar1[3] = joaat("cruiser");
			iVar2[0] = iLocal_158;
			iVar2[1] = 1;
			break;
		
		case 3:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("u_m_m_bikehire_01");
			iVar1[3] = joaat("cruiser");
			iVar2[0] = iLocal_158;
			iVar2[1] = 1;
			break;
		
		case 4:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("cruiser");
			break;
		
		case 5:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("cruiser");
			iVar1[2] = joaat("seashark");
			iVar1[3] = joaat("a_m_y_musclbeac_01");
			break;
		
		case 6:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			break;
		
		case 7:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("csb_porndudes");
			iVar1[3] = joaat("ig_jimmydisanto");
			break;
		
		case 8:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("ig_jimmydisanto");
			break;
		
		case 9:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("ig_jimmydisanto");
			break;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iVar1[iVar0] != 0)
		{
			unk_0x6FF834D85E2DD4C6(iVar1[iVar0]);
			if (!unk_0x9A0B2ED5055D3F0B(iVar1[iVar0]))
			{
				iVar3 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (iVar2[iVar0] != 0)
		{
			unk_0x0D9525F20FB71C52(iVar2[iVar0], "fam2");
			if (!unk_0x0840F461D7BD8859(iVar2[iVar0], "fam2"))
			{
				iVar3 = 0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_199(int iParam0, int iParam1)//Position - 0x20A12
{
	struct<82> Var0;
	
	if (!func_89(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_200(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_200(int iParam0, var uParam1, int iParam2)//Position - 0x20A55
{
	int iVar0;
	struct<98> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("tribike"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				
				case joaat("faggio2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				
				case joaat("emperor"):
					Var1 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

void func_201(int iParam0)//Position - 0x20E49
{
	iLocal_172 = 0;
	iLocal_70 = iParam0;
}

int func_202(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x20E59
{
	unk_0x4FB260623DD93924(0, 71, 1);
	unk_0x4FB260623DD93924(0, 72, 1);
	unk_0x4FB260623DD93924(0, 76, 1);
	unk_0x4FB260623DD93924(0, 73, 1);
	unk_0x4FB260623DD93924(0, 59, 1);
	unk_0x4FB260623DD93924(0, 60, 1);
	if (bParam5)
	{
		unk_0x4FB260623DD93924(0, 75, 1);
	}
	unk_0x4FB260623DD93924(0, 80, 1);
	if (!bParam6)
	{
		unk_0x4FB260623DD93924(0, 69, 1);
		unk_0x4FB260623DD93924(0, 70, 1);
		unk_0x4FB260623DD93924(0, 68, 1);
	}
	unk_0x4FB260623DD93924(0, 74, 1);
	unk_0x4FB260623DD93924(0, 86, 1);
	unk_0x4FB260623DD93924(0, 81, 1);
	unk_0x4FB260623DD93924(0, 82, 1);
	unk_0x4FB260623DD93924(0, 138, 1);
	unk_0x4FB260623DD93924(0, 136, 1);
	unk_0x4FB260623DD93924(0, 114, 1);
	unk_0x4FB260623DD93924(0, 107, 1);
	unk_0x4FB260623DD93924(0, 110, 1);
	unk_0x4FB260623DD93924(0, 89, 1);
	unk_0x4FB260623DD93924(0, 89, 1);
	unk_0x4FB260623DD93924(0, 87, 1);
	unk_0x4FB260623DD93924(0, 88, 1);
	unk_0x4FB260623DD93924(0, 113, 1);
	unk_0x4FB260623DD93924(0, 115, 1);
	unk_0x4FB260623DD93924(0, 116, 1);
	unk_0x4FB260623DD93924(0, 117, 1);
	unk_0x4FB260623DD93924(0, 118, 1);
	unk_0x4FB260623DD93924(0, 119, 1);
	unk_0x4FB260623DD93924(0, 131, 1);
	unk_0x4FB260623DD93924(0, 132, 1);
	unk_0x4FB260623DD93924(0, 123, 1);
	unk_0x4FB260623DD93924(0, 126, 1);
	unk_0x4FB260623DD93924(0, 129, 1);
	unk_0x4FB260623DD93924(0, 130, 1);
	unk_0x4FB260623DD93924(0, 133, 1);
	unk_0x4FB260623DD93924(0, 134, 1);
	unk_0x39FCF612EAC7971C();
	func_203(iParam0);
	if ((unk_0x53C562FD2B9E3AB0() - Global_29) > 500)
	{
		unk_0xA1AA40A93CA0F40D(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x53C562FD2B9E3AB0();
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xE97272C977DEADD3(unk_0x90D5DFB054818BA7(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_203(int iParam0)//Position - 0x20FE8
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xE746585056D841A7(iParam0))
		{
			if (unk_0xB8B664A5307FB39B(iParam0))
			{
				unk_0x463DA544A329DE36(iParam0, 0);
			}
		}
	}
}

void func_204()//Position - 0x21014
{
	if ((!func_171() && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0)) && (unk_0x53C562FD2B9E3AB0() - iLocal_167) > 5000)
	{
		if ((((((((unk_0xB8DE76287EDC4957(iLocal_92, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_88)) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0)) && unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0)) && unk_0x0BA31FF7931F3DD3(iLocal_92)) && unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502()) != iLocal_92) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_88, 1)) < 35f) && !unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502())) && Local_545.f_1)
		{
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_186) > 6000)
			{
				if (func_157(&Local_549, cLocal_202, "FAM2_GETOFF", 8, 0, 0, 0))
				{
					iLocal_186 = unk_0x53C562FD2B9E3AB0();
				}
			}
		}
	}
}

void func_205(char* sParam0, bool bParam1)//Position - 0x210FF
{
	if (bParam1)
	{
		if (!iLocal_554)
		{
			if (func_157(&Local_549, cLocal_548, sParam0, 8, 0, 0, 0))
			{
				iLocal_555 = 0;
				iLocal_554 = 1;
			}
		}
		if (iLocal_555)
		{
			if (func_206(&Local_549, cLocal_548, sParam0, &Local_556, 8, 0, 0))
			{
				iLocal_555 = 0;
			}
		}
	}
	if (!bParam1)
	{
		if (!iLocal_555)
		{
			Local_556 = { func_170() };
			func_168();
			iLocal_555 = 1;
		}
	}
}

bool func_206(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2116D
{
	func_167(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_158(sParam2, iParam4, 0);
}

int func_207()//Position - 0x211C1
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

void func_208(int iParam0, int iParam1, vector3 vParam2, int iParam3, var uParam4)//Position - 0x211E5
{
	if (unk_0xB8DE76287EDC4957(*iParam0, 0) && unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *iParam0, 0))
		{
			if (!unk_0xA6DECE14FC9A8C51(*iParam1))
			{
				unk_0x84CDD933AFA470D2();
				if (!uParam4->f_1)
				{
					iLocal_167 = unk_0x53C562FD2B9E3AB0();
					func_147(uParam4);
				}
				*iParam1 = func_210(*iParam0, 0, 0);
			}
			if (unk_0xA6DECE14FC9A8C51(*iParam3))
			{
				unk_0xE30CF11C0EE14316(iParam3);
			}
		}
		else
		{
			if (!unk_0xA6DECE14FC9A8C51(*iParam3))
			{
				*iParam3 = func_209(vParam2, 1);
			}
			if (unk_0xA6DECE14FC9A8C51(*iParam1))
			{
				unk_0x84CDD933AFA470D2();
				unk_0xE30CF11C0EE14316(iParam1);
			}
		}
	}
}

int func_209(vector3 vParam0, int iParam1)//Position - 0x21282
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_153(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, iParam1);
	return iVar0;
}

int func_210(int iParam0, bool bParam1, bool bParam2)//Position - 0x212AE
{
	return func_152(iParam0, !bParam1, bParam2);
}

int func_211(int iParam0, var uParam1, var uParam2)//Position - 0x212C1
{
	*uParam2 = 1;
	if (!unk_0x191BE1BC8F26F3C1(*iParam0, 0))
	{
		if (!unk_0x0BA31FF7931F3DD3(*iParam0) && unk_0x90D5DFB054818BA7(*iParam0) < 2f)
		{
			*uParam1 = (*uParam1 + unk_0x46C19C2753391FBF());
			return *uParam1 > 3f;
		}
		else
		{
			*uParam1 = 0f;
		}
	}
	return 0;
}

void func_212()//Position - 0x2130D
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_572)
	{
		switch (Local_572[iVar0 /*8*/].f_2)
		{
			case 0:
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), Local_572[iVar0 /*8*/].f_4) < 2500f)
				{
					vVar1 = { func_214(iVar0) };
					if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_572[iVar0 /*8*/].f_4, vVar1.f_3, 0, 1, 0))
					{
						if (func_213(iVar0, joaat("squalo"), vVar1))
						{
							unk_0x1267474D9A69CA37(2f, 8f, 3);
							Local_572[iVar0 /*8*/].f_2++;
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0x3AB6A1A9084FB0A4(Local_572[iVar0 /*8*/].f_1) && unk_0xB8DE76287EDC4957(Local_572[iVar0 /*8*/], 0))
				{
					if (unk_0x8DDE799D31A3D099(Local_572[iVar0 /*8*/]) && !unk_0xA2E853C4E12289ED(Local_572[iVar0 /*8*/]))
					{
						if ((unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), Local_572[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0) || (unk_0xB8DE76287EDC4957(iLocal_99[0], 0) && unk_0x21B6FFFD04C9FF3A(iLocal_99[0], Local_572[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0))) || (unk_0xB8DE76287EDC4957(iLocal_99[1], 0) && unk_0x21B6FFFD04C9FF3A(iLocal_99[1], Local_572[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0)))
						{
							unk_0x4B039AC00BAF53A5(Local_572[iVar0 /*8*/], 5000, 786469, 1);
						}
					}
				}
				if ((unk_0x6ADD12BF4D6D2587(Local_572[iVar0 /*8*/]) && unk_0x6ADD12BF4D6D2587(Local_572[iVar0 /*8*/].f_1)) && (((!unk_0x3AB6A1A9084FB0A4(Local_572[iVar0 /*8*/].f_1) && !unk_0x8DDE799D31A3D099(Local_572[iVar0 /*8*/])) || unk_0x3AB6A1A9084FB0A4(Local_572[iVar0 /*8*/].f_1)) || !unk_0xB8DE76287EDC4957(Local_572[iVar0 /*8*/], 0)))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(Local_572[iVar0 /*8*/].f_1, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 10000f && system::vdist2(unk_0xB3328BA8976B416C(Local_572[iVar0 /*8*/], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 10000f)
					{
						unk_0x486F346ADFE56674(&(Local_572[iVar0 /*8*/].f_1));
						unk_0x5380482A432E314E(&(Local_572[iVar0 /*8*/]));
					}
				}
				break;
		}
		iVar0++;
	}
}

int func_213(int iParam0, int iParam1, vector3 vParam2)//Position - 0x21551
{
	unk_0x6FF834D85E2DD4C6(iParam1);
	unk_0x6FF834D85E2DD4C6(joaat("a_m_y_genstreet_01"));
	unk_0x0D9525F20FB71C52(iParam0 + 1, "fam2amb");
	if ((unk_0x9A0B2ED5055D3F0B(iParam1) && unk_0x9A0B2ED5055D3F0B(joaat("a_m_y_genstreet_01"))) && unk_0x0840F461D7BD8859(iParam0 + 1, "fam2amb"))
	{
		Local_572[iParam0 /*8*/] = unk_0xEA60F3B426BB095B(iParam1, vParam2, 0f, 1, 1, 0);
		Local_572[iParam0 /*8*/].f_1 = unk_0x00D1A9572426E8DD(Local_572[iParam0 /*8*/], 26, joaat("a_m_y_genstreet_01"), -1, 1, true);
		unk_0x771A86309E0CA47B(Local_572[iParam0 /*8*/].f_1, 1);
		unk_0x8D7ABC97ED508270(Local_572[iParam0 /*8*/], iParam0 + 1, "fam2amb", 1);
		unk_0x4BEFCD5DAE410A90(Local_572[iParam0 /*8*/], 2);
		unk_0x14776E43F90DD454(iParam1);
		unk_0x14776E43F90DD454(joaat("a_m_y_genstreet_01"));
		return 1;
	}
	return 0;
}

struct<10> func_214(int iParam0)//Position - 0x21611
{
	struct<10> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -935,5378f, -1633,737f, 0,3306f };
			Var0.f_3 = { 62,75f, 48,75f, 11f };
			Var0.f_6 = { -997,8688f, -1383,004f, 0,406f };
			Var0.f_9 = 314,1291f;
			break;
		
		case 1:
			Var0 = { -928,3334f, -1359,194f, 0,3531f };
			Var0.f_3 = { 28,25f, 34,75f, 11f };
			Var0.f_6 = { -723,3589f, -1350,093f, 0,3208f };
			Var0.f_9 = 294,1011f;
			break;
	}
	return Var0;
}

void func_215()//Position - 0x216C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	
	if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
	{
		if ((!iLocal_895 && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0)) && system::vmag2(unk_0x8FD9FCCB6E4BD999(iLocal_92)) > 324f)
		{
			iLocal_895 = 1;
		}
		if ((iLocal_895 && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && system::vmag2(unk_0x8FD9FCCB6E4BD999(iLocal_92)) < 225f)
		{
			iLocal_895 = 0;
		}
		if (!iLocal_896)
		{
			if (!unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_92))
			{
				iLocal_896 = 1;
			}
		}
		else
		{
			iLocal_896 = 0;
		}
		if ((iLocal_896 && iLocal_895) && unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
		{
			unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), 0, 0);
		}
	}
	iLocal_73 = func_250();
	if (iLocal_73 < 7 && iLocal_73 > iLocal_75)
	{
		iLocal_75 = iLocal_73;
	}
	if (iLocal_73 != iLocal_74)
	{
		if (!unk_0xC80D31E4B587871C(iLocal_76, iLocal_73))
		{
			unk_0x872F1C1F8587CCC7(&iLocal_76, iLocal_73);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_99[0]))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_99[0]))
			{
				unk_0x7674774BB9279265(iLocal_99[0]);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_99[1]))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_99[1]))
			{
				unk_0x7674774BB9279265(iLocal_99[1]);
			}
		}
	}
	if (unk_0xA2E853C4E12289ED(iLocal_92) && system::timera() > 500)
	{
		unk_0x7674774BB9279265(iLocal_92);
	}
	iLocal_74 = iLocal_73;
	if (!unk_0x6ADD12BF4D6D2587(iLocal_107))
	{
		unk_0x6FF834D85E2DD4C6(joaat("prop_ld_test_01"));
		if (unk_0x9A0B2ED5055D3F0B(joaat("prop_ld_test_01")))
		{
			iLocal_107 = unk_0x5E35CF35E65D69B9(joaat("prop_ld_test_01"), vLocal_118, 1, true, 0);
			unk_0xB18E1DBC397238E1(iLocal_107, false, 0);
			unk_0xB3A8974D2C811672(iLocal_107, false, 0);
			unk_0xEDC33A771FAEB393(iLocal_107, true);
		}
	}
	switch (iLocal_159)
	{
		case 0:
			unk_0xC0EBC1452FCAB15C(0);
			if ((((func_249() && func_248(0, 0)) && func_248(1, 0)) && func_247()) && func_246())
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_91[0]))
				{
					unk_0xD68E88A8E0BE8697(iLocal_91[0], unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
					unk_0xCE93FCB8A8D8DF0B(iLocal_91[0], iLocal_79);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
				{
					unk_0x6450931B826B49D9("missfam2_tracy_jetski");
					unk_0xB38E13EF2EC6F0E9(iLocal_92, 1000f);
					unk_0xD38F266C132F2897(iLocal_92, true, false, false, true, false, 0, 0, 0);
					unk_0xD1980BC8CFFBF0B9(iLocal_88, 0);
					unk_0xE01CE1EBCD7EE551(iLocal_88, 5000, 0);
					unk_0xAE6EBBBBD8B9FB30(iLocal_88, 20, false);
					unk_0xAE6EBBBBD8B9FB30(iLocal_88, 2, false);
					unk_0x771A86309E0CA47B(iLocal_88, 1);
					unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
					unk_0x1A0806871323CD16(iLocal_88, true);
				}
				unk_0xF96119FCCD4D1889(5, iLocal_79, 1862763509);
				func_245(&Local_549, 2);
				func_142(&Local_549, 2, iLocal_88, "TRACEY", 0, 1);
				func_244(1);
				func_243();
				func_242();
				iLocal_190 = 0;
				fLocal_887 = 0f;
				fLocal_891 = 0f;
				iLocal_876 = 0;
				bLocal_877 = false;
				iLocal_875[0] = 0;
				iLocal_875[1] = 0;
				bLocal_191 = false;
				iLocal_192 = 0;
				iLocal_194 = 0;
				iLocal_195 = 0;
				bLocal_193 = false;
				iLocal_878 = 0;
				bLocal_894 = false;
				iLocal_77 = 0;
				iLocal_78 = 6;
				iLocal_75 = 0;
				unk_0x8810DC630928B398("FAM2_ON_JETSKI");
				unk_0xC9AB9876D739448E(iLocal_99[0], 1);
				unk_0xC9AB9876D739448E(iLocal_99[1], 1);
				unk_0x5CA96D6783EE6897(iLocal_99[0], 101, "famtwo", 15f, 262144);
				unk_0x5CA96D6783EE6897(iLocal_99[1], 102, "famtwo", 15f, 262144);
				unk_0x5CA96D6783EE6897(iLocal_92, 1, "famtwoplayer", 24f, 262144);
				unk_0x6CF99BCE94E6F07C(iLocal_99[0], "FAMILY_2_ENEMY_JETSKI_Group", 0);
				unk_0x6CF99BCE94E6F07C(iLocal_99[1], "FAMILY_2_ENEMY_JETSKI_Group", 0);
				unk_0xB4AF8E4D052DCD63(unk_0xFC1458A37D98B502(), 3);
				if (unk_0x6ADD12BF4D6D2587(iLocal_92) && unk_0xB8DE76287EDC4957(iLocal_92, 0))
				{
					unk_0xDE285E8FA18B66DD("OFF");
					unk_0xDFC63F22B454FFF5(iLocal_92, "OFF");
					unk_0xC9AB9876D739448E(iLocal_92, 1);
				}
				if (!unk_0x771D0F8F56A5FE6C("FAMILY_2_JETSKI_CHASE"))
				{
					unk_0xE859EF37EA7362D3("FAMILY_2_JETSKI_CHASE");
				}
				unk_0xA15269351F50F113(iLocal_92, true, 1, 0);
				unk_0xC234848D21B6064E(2);
				system::settimerb(0);
				unk_0x1267474D9A69CA37(0f, 8f, 4);
				func_241(0, 4f);
				iLocal_76 = 0;
				iLocal_159++;
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
			}
			break;
		
		case -1:
			unk_0xBC469A15B0FBB2B3("smboat");
			while (!unk_0xAB84FBE3AB3FFAD3("smBoat"))
			{
				system::wait(0);
			}
			iLocal_159 = 1;
			iLocal_155 = 0;
			break;
		
		case 1:
			if (!unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
			{
				unk_0x59C3AC31C7544A28(500);
			}
			if (unk_0x8EA3C8E091EA5BA4(iLocal_112))
			{
				if (system::timerb() > 1000)
				{
					unk_0x02934BABFD4CD384(iLocal_112, 0);
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(Local_549[7 /*10*/]) || unk_0x3AB6A1A9084FB0A4(Local_549[7 /*10*/]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[0]))
				{
					func_142(&Local_549, 7, iLocal_100[0], "FAM2MAN2", 0, 1);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[1]))
				{
					func_142(&Local_549, 7, iLocal_100[1], "FAM2MAN2", 0, 1);
				}
			}
			if (!iLocal_888)
			{
				if (bLocal_890)
				{
					iVar0 = 0;
					while (iVar0 <= 1)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[iVar0]))
						{
							unk_0x2C8C730E9565B998(iLocal_100[iVar0], 0);
							unk_0xD1D0B4122585CC63(iLocal_100[iVar0], 2);
							unk_0xBB3CC641B6AED5E5(iLocal_100[iVar0], 0);
							unk_0x9A3DC24536A0767A(iLocal_100[iVar0], 2055493265);
							unk_0xEA4C3AEAE49593B4(iLocal_100[iVar0], 50);
						}
						iVar0++;
					}
					bLocal_890 = false;
				}
				if ((((((iLocal_73 == 7 && iLocal_190 < 100) || iLocal_874[0]) || iLocal_874[1]) || iLocal_73 < iLocal_75) || iLocal_889) || (unk_0xB8DE76287EDC4957(iLocal_92, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0)))
				{
					if (!unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
					{
						iLocal_562[0] = unk_0x53C562FD2B9E3AB0();
						iLocal_562[1] = (unk_0x53C562FD2B9E3AB0() - 1500);
						iLocal_888 = 1;
					}
				}
			}
			else
			{
				if (fLocal_891 > 10f && fLocal_891 < 12f)
				{
				}
				else if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
				{
					if ((!unk_0x3AB6A1A9084FB0A4(iLocal_100[0]) && system::vdist2(unk_0xB3328BA8976B416C(iLocal_100[0], 1), unk_0xB3328BA8976B416C(iLocal_92, 1)) < 225f) || (!unk_0x3AB6A1A9084FB0A4(iLocal_100[1]) && system::vdist2(unk_0xB3328BA8976B416C(iLocal_100[1], 1), unk_0xB3328BA8976B416C(iLocal_92, 1)) < 225f))
					{
						fLocal_891 = (fLocal_891 + unk_0x46C19C2753391FBF());
					}
				}
				if (!bLocal_890)
				{
					iVar1 = 0;
					while (iVar1 <= 1)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_100[iVar1]) && !unk_0x3AB6A1A9084FB0A4(iLocal_100[iVar1]))
						{
							unk_0x2C8C730E9565B998(iLocal_100[iVar1], 1);
							unk_0xD1D0B4122585CC63(iLocal_100[iVar1], 2);
							unk_0xBB3CC641B6AED5E5(iLocal_100[iVar1], 20);
							unk_0x9A3DC24536A0767A(iLocal_100[iVar1], 1566631136);
							unk_0xEA4C3AEAE49593B4(iLocal_100[iVar1], 40);
							if (unk_0x6ADD12BF4D6D2587(iLocal_99[iVar1]))
							{
								if (unk_0x8DDE799D31A3D099(iLocal_99[iVar1]))
								{
									unk_0x7674774BB9279265(iLocal_99[iVar1]);
								}
							}
						}
						iVar1++;
					}
					bLocal_890 = true;
				}
				else if ((iLocal_73 != 2 || (iLocal_73 == 2 && iLocal_77 == 0)) && !iLocal_876)
				{
					func_239();
				}
				if (((((!iLocal_874[0] && !iLocal_874[1]) && iLocal_73 != 7) && iLocal_73 >= iLocal_75) && !iLocal_889) && (unk_0xB8DE76287EDC4957(iLocal_92, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0)))
				{
					iLocal_888 = 0;
				}
				if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
				{
					iLocal_888 = 0;
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_91[0]))
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_91[0], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 10000f)
				{
					unk_0x486F346ADFE56674(&(iLocal_91[0]));
				}
			}
			func_236();
			func_223();
			if (iLocal_190 < 100)
			{
				if (!iLocal_194)
				{
					if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4) && unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
					{
						iLocal_194 = 1;
					}
				}
				else if (!iLocal_195)
				{
					if (func_157(&Local_549, cLocal_202, "FAM2_SHOOT", 8, 0, 0, 0))
					{
						iLocal_195 = 1;
					}
				}
				if (!bLocal_191 || !bLocal_193)
				{
					bLocal_193 = true;
					iVar2 = 0;
					while (iVar2 < iLocal_100)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_100[iVar2]))
						{
							if (unk_0x3AB6A1A9084FB0A4(iLocal_100[iVar2]) || unk_0x191BE1BC8F26F3C1(iLocal_100[iVar2], 0))
							{
								bLocal_191 = true;
							}
							else
							{
								bLocal_193 = false;
							}
						}
						iVar2++;
					}
				}
				if ((bLocal_191 && !iLocal_192) && !bLocal_193)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_92, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
					{
						func_154();
						if (iLocal_190 < 50 || iLocal_190 >= 100)
						{
							iLocal_163 = iLocal_190;
						}
						if (unk_0xA6DECE14FC9A8C51(iLocal_105))
						{
							unk_0xE30CF11C0EE14316(&iLocal_105);
						}
						iLocal_190 = 50;
						iLocal_192 = 1;
					}
				}
				if (iLocal_73 == 1)
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_102))
					{
						unk_0xE30CF11C0EE14316(&iLocal_102);
						if (unk_0x23F2F89E3D1CB7C4() && !func_171())
						{
							unk_0x84CDD933AFA470D2();
						}
					}
				}
				if (iLocal_190 < 5)
				{
					if (iLocal_73 == 1)
					{
						iLocal_190 = 5;
					}
				}
				func_221();
			}
			if (iLocal_190 != 60 && iLocal_190 != 61)
			{
				if (unk_0xB8DE76287EDC4957(iLocal_92, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
				{
					if (iLocal_190 < 50 || iLocal_190 >= 100)
					{
						iLocal_163 = iLocal_190;
					}
					iLocal_190 = 60;
				}
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_102) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
			{
				if (iLocal_73 == 1)
				{
					unk_0xE30CF11C0EE14316(&iLocal_102);
				}
			}
			switch (iLocal_190)
			{
				case 0:
					if (unk_0x3A801AA34DD821BE("missfam2_tracy_jetski"))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
						{
							if (!unk_0xA5F6598E13F98E08(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a", 3))
							{
								if (func_220(0))
								{
									unk_0x12C9D41D52A560D6(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (func_157(&Local_549, cLocal_202, "FAM2_COMING", 8, 0, 0, 0))
								{
									unk_0x8810DC630928B398("FAM2_COMING");
									unk_0x60C06BFD037BB7CF(iLocal_88, iLocal_100[0], -1, 0, 2);
									iLocal_190++;
									system::settimera(0);
								}
							}
							else if (unk_0x7A70772AE40E3821(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a") > 0,12f)
							{
								if (func_157(&Local_549, cLocal_202, "FAM2_COMING", 8, 0, 0, 0))
								{
									unk_0x8810DC630928B398("FAM2_COMING");
									iLocal_190++;
									system::settimera(0);
								}
							}
						}
					}
					break;
				
				case 1:
					if (system::timera() > 1000)
					{
						vVar3 = { vLocal_210 - unk_0xB3328BA8976B416C(iLocal_92, 1) };
						vVar4 = { unk_0xCE3B2111021F7234(iLocal_92) };
						fVar5 = unk_0xAF3D7D969F2C195C(vVar4.x, vVar4.y, vVar3.x, vVar3.y);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
						if (fVar5 < -180f)
						{
							fVar5 = (fVar5 + 360f);
						}
						if (fVar5 < 0f)
						{
							if (fVar5 > -90f)
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
								{
									unk_0x12C9D41D52A560D6(iLocal_88, "missfam2_tracy_jetski", "tracy_point_right", 4f, -8f, -1, 0, 0, 0, 0, 0);
								}
							}
						}
						else if (fVar5 < 90f)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
							{
								unk_0x12C9D41D52A560D6(iLocal_88, "missfam2_tracy_jetski", "tracy_point_left", 4f, -8f, -1, 0, 0, 0, 0, 0);
							}
						}
					}
					if ((((!func_171() || system::timera() > 3000) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0)) && unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0)) && !unk_0xA6DECE14FC9A8C51(iLocal_102))
					{
						iLocal_102 = func_209(vLocal_210, 0);
						iLocal_190++;
					}
					break;
				
				case 2:
					if (func_157(&Local_549, cLocal_202, "FAM2_MRESP", 8, 0, 0, 0))
					{
						unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), vLocal_210, 7500, 1, 2);
						system::settimera(0);
						iLocal_190++;
					}
					break;
				
				case 3:
					if (!func_171())
					{
						func_150("FM2_CHASE1", 7500, 1);
						system::settimera(0);
						iLocal_190++;
					}
					break;
				
				case 4:
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_210) > 900f)
					{
						func_219("FAM2_OLREM", "", 9000);
					}
					break;
				
				case 5:
					if (((unk_0x6ADD12BF4D6D2587(iLocal_100[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_100[0])) && unk_0x08765A6321A42CA1(iLocal_100[0])) || ((unk_0x6ADD12BF4D6D2587(iLocal_100[1]) && !unk_0x3AB6A1A9084FB0A4(iLocal_100[1])) && unk_0x08765A6321A42CA1(iLocal_100[1])))
					{
						iLocal_190++;
					}
					break;
				
				case 6:
					if (!func_171())
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
						{
							if (!unk_0xA5F6598E13F98E08(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c", 3))
							{
								if (func_220(0))
								{
									unk_0x12C9D41D52A560D6(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (func_157(&Local_549, cLocal_202, "FAM2_HESHOOT", 8, 0, 0, 0))
								{
									unk_0x8810DC630928B398("FAM2_SHOOTING");
									unk_0x60C06BFD037BB7CF(iLocal_88, iLocal_100[0], -1, 0, 2);
									iLocal_190++;
									system::settimera(0);
								}
							}
							else if (unk_0x7A70772AE40E3821(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c") > 0,12f)
							{
								if (func_157(&Local_549, cLocal_202, "FAM2_HESHOOT", 8, 0, 0, 0))
								{
									unk_0x8810DC630928B398("FAM2_SHOOTING");
									iLocal_190++;
									system::settimera(0);
								}
							}
						}
					}
					break;
				
				case 7:
					if (!func_171())
					{
						func_150("FM2_CHASE3", 7500, 1);
						system::settimerb(0);
						iLocal_190++;
					}
					break;
				
				case 8:
					if (system::timerb() > 5000)
					{
						if (!func_171())
						{
							if (func_157(&Local_549, cLocal_202, "FAM2_LOSEM", 8, 0, 0, 0))
							{
								iLocal_190++;
							}
						}
					}
					break;
				
				case 9:
					if (!func_171())
					{
						if (func_216(&Local_549, cLocal_202, "FAM2_WHO", "FAM2_WHO_3", "FAM2_WHO", "FAM2_WHO_5", "FAM2_WHO", "FAM2_WHO_7", "FAM2_WHO", "FAM2_WHO_9", 8, 0, 0))
						{
							iLocal_190++;
						}
					}
					break;
				
				case 10:
					func_219("FAM2_TSHOUT", "FAM2_MSHOUT", 8000);
					if (iLocal_73 == 2)
					{
						iLocal_190++;
					}
					break;
				
				case 11:
					if (func_157(&Local_549, cLocal_202, "FAM2_LOSET", 8, 0, 0, 0))
					{
						iLocal_190++;
					}
					break;
				
				case 12:
					func_219("FAM2_TSHOUT", "FAM2_MSHOUT", 8000);
					break;
				
				case 50:
					func_168();
					if (func_157(&Local_549, cLocal_202, "FAM2_KILLONE", 8, 0, 0, 0))
					{
						iLocal_190++;
					}
					break;
				
				case 51:
					if (func_157(&Local_549, cLocal_202, "FAM2_KILLER", 8, 0, 0, 0))
					{
						iLocal_190 = iLocal_163;
					}
					break;
				
				case 60:
					func_154();
					if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
					{
						if (!unk_0xA6DECE14FC9A8C51(iLocal_105))
						{
							iLocal_105 = func_210(iLocal_92, 0, 0);
							func_147(&Local_545);
						}
						if (unk_0xA6DECE14FC9A8C51(iLocal_102))
						{
							unk_0xE30CF11C0EE14316(&iLocal_102);
						}
						iLocal_881 = unk_0x53C562FD2B9E3AB0();
						iLocal_190++;
					}
					break;
				
				case 61:
					if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
					{
						if (!unk_0x23F2F89E3D1CB7C4())
						{
							if ((((!unk_0x3AB6A1A9084FB0A4(iLocal_88) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_88, 20f, 20f, 20f, 0, 1, 0)) && unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502())) && !unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502())) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 1))
							{
								if ((unk_0x53C562FD2B9E3AB0() - iLocal_881) > 6000)
								{
									if (func_157(&Local_549, cLocal_202, "FAM2_FALL", 8, 0, 0, 0))
									{
										iLocal_881 = unk_0x53C562FD2B9E3AB0();
									}
								}
							}
						}
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
						{
							func_154();
							if (((iLocal_73 == 0 || iLocal_73 == 7) && !unk_0xA6DECE14FC9A8C51(iLocal_102)) && iLocal_163 < 5)
							{
								iLocal_102 = func_209(vLocal_210, 0);
							}
							if (unk_0xA6DECE14FC9A8C51(iLocal_105))
							{
								unk_0xE30CF11C0EE14316(&iLocal_105);
							}
							unk_0x84CDD933AFA470D2();
							iLocal_190 = iLocal_163;
						}
					}
					break;
				
				case 100:
					if (unk_0xA6DECE14FC9A8C51(iLocal_101[0]))
					{
						unk_0xE30CF11C0EE14316(&(iLocal_101[0]));
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_101[1]))
					{
						unk_0xE30CF11C0EE14316(&(iLocal_101[1]));
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_102))
					{
						unk_0xE30CF11C0EE14316(&iLocal_102);
					}
					func_168();
					if (!func_171())
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0) && unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
							{
								if (!unk_0xA5F6598E13F98E08(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d", 3))
								{
									unk_0x12C9D41D52A560D6(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (unk_0x7A70772AE40E3821(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d") > 0,25f)
								{
									if (unk_0x771D0F8F56A5FE6C("FAMILY_2_JETSKI_CHASE"))
									{
										unk_0xE02E32C69260FBB7("FAMILY_2_JETSKI_CHASE");
									}
									unk_0xCB3D88C918AA637C(iLocal_88);
									iLocal_190++;
								}
							}
						}
					}
					break;
				
				case 101:
					if (bLocal_193)
					{
						sVar6 = "FAM2_KILLTWO";
					}
					else if (bLocal_191)
					{
						sVar6 = "FAM2_ESCAPE";
					}
					else
					{
						sVar6 = "FAM2_LOST";
					}
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0) && unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0))
					{
						bLocal_894 = true;
					}
					func_205(sVar6, bLocal_894);
					if ((iLocal_554 && !func_171()) && !iLocal_555)
					{
						unk_0x1267474D9A69CA37(5f, 5f, 3);
						iLocal_554 = 0;
						iLocal_190++;
					}
					break;
				
				case 102:
					if (bLocal_193 || bLocal_191)
					{
						sVar7 = "FAM2_KILLER2";
					}
					else
					{
						sVar7 = "FAM2_TALK1";
					}
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0) && unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0))
					{
						bLocal_894 = true;
					}
					func_205(sVar7, bLocal_894);
					if ((iLocal_554 && !func_171()) && !iLocal_555)
					{
						unk_0xFCCDDE0E48CF9588("missfam2_tracy_jetski");
						unk_0xB4AF8E4D052DCD63(unk_0xFC1458A37D98B502(), 0);
						iLocal_554 = 0;
						func_201(8);
					}
					break;
			}
			if ((((!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0) && !unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502())) && !unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) && !unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_88, 1)) > 30f)
			{
				iLocal_159 = 2;
			}
			if (!unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0))
			{
				iLocal_159 = 3;
			}
			if (!unk_0xB8DE76287EDC4957(iLocal_92, 0) || func_211(&iLocal_92, &uLocal_151, &iLocal_152))
			{
				iLocal_159 = 4;
			}
			if ((((iLocal_190 < 100 && ((unk_0x3AB6A1A9084FB0A4(iLocal_100[0]) || unk_0x191BE1BC8F26F3C1(iLocal_100[0], 0)) || iLocal_875[0])) && ((unk_0x3AB6A1A9084FB0A4(iLocal_100[1]) || unk_0x191BE1BC8F26F3C1(iLocal_100[1], 0)) || iLocal_875[1])) && iLocal_190 != 60) && iLocal_190 != 61)
			{
				unk_0xC234848D21B6064E(0);
				unk_0x8810DC630928B398("FAM2_LOST_HIM");
				iLocal_190 = 100;
			}
			if (iLocal_159 > 1)
			{
				unk_0x84CDD933AFA470D2();
				func_168();
				iVar8 = 0;
				while (iVar8 < iLocal_100)
				{
					if (((!unk_0x3AB6A1A9084FB0A4(iLocal_100[iVar8]) && unk_0x6ADD12BF4D6D2587(iLocal_99[iVar8])) && unk_0xB8DE76287EDC4957(iLocal_99[iVar8], 0)) && unk_0xA8D0477084E86A92(iLocal_100[iVar8], iLocal_99[iVar8], 0))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_100[iVar8]);
						if (unk_0x8DDE799D31A3D099(iLocal_99[iVar8]))
						{
							unk_0x7674774BB9279265(iLocal_99[iVar8]);
						}
					}
					iVar8++;
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_102))
				{
					unk_0xE30CF11C0EE14316(&iLocal_102);
				}
				system::settimera(0);
			}
			break;
		
		case 2:
			if (system::timera() > 2000)
			{
				func_103("FM2_TRAAB");
			}
			break;
		
		case 3:
			if (system::timera() > 2000)
			{
				func_103("FM2_TRAFELL");
			}
			break;
		
		case 4:
			if (system::timera() > 1000)
			{
				unk_0xB4AF8E4D052DCD63(unk_0xFC1458A37D98B502(), 3);
				if (unk_0x191BE1BC8F26F3C1(iLocal_92, 0))
				{
					func_103("FM2_SKIDED");
				}
				else
				{
					func_103("FM2_SKIGRN");
				}
			}
			break;
	}
}

bool func_216(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x22AB1
{
	var uVar0;
	var uVar1;
	
	func_167(uParam0, 145, sParam1, iParam11, iParam12, 0);
	if (iParam10 > 7)
	{
		if (iParam10 < 12)
		{
			iParam10 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_218(4, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, sParam9, 0, 0, 0, 0, 0, 0);
	return func_217(&uVar0, &uVar1, iParam10, 0);
}

int func_217(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x22B0E
{
	int iVar0;
	
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam2 > Global_15758)
			{
				if (bParam3 == 0)
				{
					unk_0xB31CEFB00C146C91(false);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
				}
				else
				{
					func_166();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_165(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_164();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16752 = Global_16753;
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15375.f_370 = Global_16745;
		Global_15752 = Global_15753;
		Global_15754 = Global_15755;
		if (Global_16014 == 0)
		{
			Global_15910[0 /*6*/] = { Global_15936[0 /*6*/] };
			Global_15910[1 /*6*/] = { Global_15936[1 /*6*/] };
			Global_15962[0 /*6*/] = { Global_15988[0 /*6*/] };
			Global_15962[1 /*6*/] = { Global_15988[1 /*6*/] };
			Global_15923[0 /*6*/] = { Global_15949[0 /*6*/] };
			Global_15923[1 /*6*/] = { Global_15949[1 /*6*/] };
			Global_15975[0 /*6*/] = { Global_16001[0 /*6*/] };
			Global_15975[1 /*6*/] = { Global_16001[1 /*6*/] };
		}
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam3)
			{
				func_163();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_162())
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (Global_16014 == 0)
					{
						if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
						{
							return 0;
						}
						if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
						{
							return 0;
						}
						if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
						{
							return 0;
						}
						if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
						{
							return 0;
						}
					}
				}
			}
			if (func_161())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_160();
			Global_15766 = bParam3;
		}
		Global_15758 = iParam2;
		if (Global_15752 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15752)
			{
				StringCopy(&(Global_15375.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15375.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14622 = 0;
		func_159();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15758 || iParam2 == Global_15758)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_166();
	}
	return 0;
}

void func_218(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x22E78
{
	Global_15753 = iParam0;
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = uParam7;
	(*uParam2)[2] = uParam8;
	(*uParam1)[3] = uParam9;
	(*uParam2)[3] = uParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_219(char* sParam0, char* sParam1, int iParam2)//Position - 0x22F00
{
	int iVar0;
	int iVar1;
	
	if (iLocal_892 > iLocal_881)
	{
		iParam2 = 3000;
	}
	if (((unk_0x53C562FD2B9E3AB0() - iLocal_881) > iParam2 && !func_171()) && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0))
	{
		iVar0 = unk_0x63A6486593EC7EC3(1, 3);
		if (((!unk_0x3AB6A1A9084FB0A4(iLocal_100[0]) && unk_0xB8DE76287EDC4957(iLocal_99[0], 0)) && unk_0x21B6FFFD04C9FF3A(iLocal_99[0], iLocal_92, 20f, 20f, 5f, 0, 1, 0)) && iLocal_892 < iLocal_881)
		{
			iVar0 = unk_0x63A6486593EC7EC3(1, 6);
		}
		if (iVar0 == 1 && bLocal_191)
		{
			iVar0 = 2;
		}
		if (iVar0 == 1 && !unk_0xAB019B170BF1309C(sParam1))
		{
			if (func_157(&Local_549, cLocal_202, sParam1, 8, 0, 0, 0))
			{
				iLocal_881 = unk_0x53C562FD2B9E3AB0();
			}
		}
		else if (iVar0 == 2)
		{
			if (unk_0x74C475EB8E73D398(sParam0, "FAM2_TSHOUT"))
			{
				if (func_220(0))
				{
					iVar1 = unk_0x63A6486593EC7EC3(0, 4);
					switch (iVar1)
					{
						case 0:
							unk_0x12C9D41D52A560D6(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_e", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 1:
							unk_0x12C9D41D52A560D6(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_f", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 2:
							unk_0x12C9D41D52A560D6(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_g", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 3:
							unk_0x12C9D41D52A560D6(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_h", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						}
					}
			}
			if (bLocal_191)
			{
				if (!unk_0x74C475EB8E73D398(sParam0, "FAM2_ONE"))
				{
					sParam0 = "FAM2_ONE";
				}
			}
			if (func_157(&Local_549, cLocal_202, sParam0, 8, 0, 0, 0))
			{
				iLocal_881 = unk_0x53C562FD2B9E3AB0();
			}
		}
		else if (iVar0 >= 3)
		{
			if (unk_0x6ADD12BF4D6D2587(Local_549[7 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_549[7 /*10*/]))
			{
				if (func_157(&Local_549, cLocal_202, "FAM2_BGUY2", 8, 0, 0, 0))
				{
					iLocal_892 = unk_0x53C562FD2B9E3AB0();
				}
			}
		}
	}
}

int func_220(int iParam0)//Position - 0x2310D
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[iParam0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_88))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iLocal_100[iParam0], 1) - unk_0xB3328BA8976B416C(iLocal_88, 1) };
		vVar1 = { unk_0xCE3B2111021F7234(iLocal_88) };
		if (unk_0xE97272C977DEADD3(unk_0xAF3D7D969F2C195C(vVar1.x, vVar1.y, vVar0.x, vVar0.y)) >= 60f)
		{
			return 1;
		}
	}
	return 0;
}

void func_221()//Position - 0x23172
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (bLocal_877)
	{
		if (iLocal_876)
		{
			fVar1 = 3f;
			fVar2 = 50f;
		}
		else if (iLocal_73 == 7)
		{
			fVar1 = 5f;
			fVar2 = 250f;
		}
		else
		{
			fVar1 = 5f;
			fVar2 = 100f;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_100)
		{
			if (func_222(iVar0, fVar2, fVar1))
			{
				iLocal_875[iVar0] = 1;
				unk_0x68433819717660CF(&(iLocal_100[iVar0]));
				unk_0xC91FE17AD7353B70(&(iLocal_99[iVar0]));
				if (unk_0xA6DECE14FC9A8C51(iLocal_101[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(iLocal_101[iVar0]));
				}
			}
			iVar0++;
		}
	}
	else if (iLocal_876)
	{
		iLocal_876 = 0;
	}
	if (!iLocal_875[0] || !iLocal_875[1])
	{
		iVar0 = 0;
		while (iVar0 < iLocal_100)
		{
			if (!iLocal_875[iVar0])
			{
				if ((unk_0x6ADD12BF4D6D2587(iLocal_100[iVar0]) && (unk_0x3AB6A1A9084FB0A4(iLocal_100[iVar0]) || unk_0x191BE1BC8F26F3C1(iLocal_100[iVar0], 0))) || !unk_0x6ADD12BF4D6D2587(iLocal_100[iVar0]))
				{
					iLocal_875[iVar0] = 1;
				}
			}
			iVar0++;
		}
	}
}

int func_222(int iParam0, float fParam1, float fParam2)//Position - 0x2328B
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[iParam0]))
	{
		if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
		{
			fVar0 = system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_100[iParam0], 1));
			if ((fVar0 > (fParam1 * fParam1) && unk_0xEC211A86AB3726B6(iLocal_100[iParam0])) || fVar0 > 90000f)
			{
				if (fVar0 > 90000f)
				{
					fLocal_893[iParam0] = (fLocal_893[iParam0] + (unk_0x46C19C2753391FBF() * 10f));
				}
				fLocal_893[iParam0] = (fLocal_893[iParam0] + unk_0x46C19C2753391FBF());
			}
			else if (fLocal_893[iParam0] > 0f)
			{
				fLocal_893[iParam0] = (fLocal_893[iParam0] - (unk_0x46C19C2753391FBF() * 3f));
			}
			else
			{
				fLocal_893[iParam0] = 0f;
			}
		}
		if (fLocal_893[iParam0] > fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_223()//Position - 0x23369
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[iVar0]))
		{
			if ((!unk_0x88DDBE9908752BF0(iLocal_100[iVar0], 0) && unk_0x0BA31FF7931F3DD3(iLocal_100[iVar0])) && system::vdist2(unk_0xB3328BA8976B416C(iLocal_100[iVar0], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 100f)
			{
				unk_0x581C574C8D14208E(iLocal_100[iVar0], joaat("weapon_sniperrifle"));
			}
		}
		iVar0++;
	}
	switch (iLocal_73)
	{
		case 0:
			if (system::timerb() > 5000)
			{
				func_234(0, &uLocal_640, 101, "famtwo", 1, 0);
				func_234(1, &uLocal_653, 102, "famtwo", 1, 0);
			}
			if (system::timerb() < 2000)
			{
				unk_0x4FB260623DD93924(0, 76, 1);
				unk_0x4FB260623DD93924(0, 72, 1);
				unk_0x4FB260623DD93924(0, 69, 1);
				unk_0x4FB260623DD93924(0, 23, 1);
				unk_0x4FB260623DD93924(0, 27, 1);
				unk_0x4FB260623DD93924(0, 31, 1);
				unk_0x4FB260623DD93924(0, 30, 1);
				unk_0x4FB260623DD93924(0, 26, 1);
			}
			if (fLocal_887 < 1f)
			{
				fLocal_887 = (fLocal_887 + 0,01f);
			}
			else
			{
				fLocal_887 = 1f;
			}
			break;
		
		case 1:
			func_234(0, &uLocal_666, 201, "famtwo", 0, 0);
			func_234(1, &uLocal_712, 202, "famtwo", 0, 0);
			break;
		
		case 2:
			iLocal_77 = func_233();
			if (iLocal_77 != 6)
			{
				if (iLocal_77 != iLocal_78)
				{
					func_231(&(Local_808[0 /*25*/]), 1, func_232(iLocal_77));
					func_231(&(Local_808[1 /*25*/]), 2, func_232(iLocal_77));
					if (unk_0x6ADD12BF4D6D2587(iLocal_99[0]))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_99[0]))
						{
							unk_0x7674774BB9279265(iLocal_99[0]);
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_99[1]))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_99[1]))
						{
							unk_0x7674774BB9279265(iLocal_99[1]);
						}
					}
				}
				iLocal_78 = iLocal_77;
			}
			func_228(0);
			if (!iLocal_889)
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_99[0], 0))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_99[0], 1)) < 100f && unk_0x90D5DFB054818BA7(iLocal_92) < 7f)
					{
						iLocal_889 = 1;
					}
				}
				if (!unk_0x191BE1BC8F26F3C1(iLocal_99[1], 0))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_99[1], 1)) < 100f && unk_0x90D5DFB054818BA7(iLocal_92) < 7f)
					{
						iLocal_889 = 1;
					}
				}
			}
			else if (unk_0x90D5DFB054818BA7(iLocal_92) > 10f)
			{
				iLocal_889 = 0;
			}
			if (iLocal_77 == 0)
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_99[1], 0))
				{
					if (func_226(unk_0xB3328BA8976B416C(iLocal_99[1], 1), 1, "famtwoCanalsAlt", &uLocal_809, 0) > func_226(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 1, "famtwoCanalsAlt", &uLocal_809, 0))
					{
						iLocal_874[1] = 1;
					}
				}
				if (!unk_0x191BE1BC8F26F3C1(iLocal_99[0], 0))
				{
					if (func_226(unk_0xB3328BA8976B416C(iLocal_99[0], 1), 1, "famtwoCanalsAlt", &uLocal_809, 0) > func_226(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 1, "famtwoCanalsAlt", &uLocal_809, 0))
					{
						iLocal_874[0] = 1;
					}
				}
				func_234(1, &uLocal_809, 1, "famtwoCanalsAlt", 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[1]))
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1061,247f, -1027,52f, -1,839872f, -1158,562f, -864,5836f, 17,98512f, 250f, 0, 1, 0))
				{
					vVar1 = { -1191,48f, -1002,427f, 0f };
				}
				else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1061,247f, -1027,52f, -1,839872f, -1006,939f, -1120,256f, 6,144058f, 250f, 0, 1, 0))
				{
					vVar1 = { -1137,652f, -1097,164f, 0f };
				}
				else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -900,0117f, -1305,718f, 15,90007f, -1006,939f, -1120,256f, -8,855943f, 250f, 0, 1, 0))
				{
					vVar1 = { -1083,993f, -1189,703f, 0f };
				}
				if (!func_225(vVar1))
				{
					if (!unk_0x0C88267282FD588F(iLocal_99[1], vVar1, 2,5f, 2,5f, 2f, 0, 1, 0))
					{
						vVar2 = { Vector(-1,599754f, -1082,671f, -1114,952f) + Vector(17,75f, 133,25f, 81,25f) };
						vVar3 = { Vector(-1,599754f, -1082,671f, -1114,952f) - Vector(17,75f, 133,25f, 81,25f) };
						if (unk_0x590D9654A4367AA1(vVar3.x, vVar3.y, vVar2.x, vVar2.y))
						{
							if (unk_0x78F50AA8F955BEFC(iLocal_100[1], -1817882002) != 1)
							{
								unk_0x87A3E70B0AB01608(iLocal_100[1], iLocal_99[1], vVar1, 10f, 0, joaat("seashark"), 262144, 1f, 3f);
							}
						}
						if (!unk_0x9E06F0EE20F58CED(unk_0xB3328BA8976B416C(iLocal_99[1], 1), 2f) && !unk_0x9E06F0EE20F58CED(vVar1, 2f))
						{
							unk_0xBD8D47FDC6902B2D(iLocal_99[1], vVar1, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iLocal_99[1], 214f);
						}
					}
				}
			}
			break;
		
		case 3:
			if ((((!unk_0x3AB6A1A9084FB0A4(iLocal_100[1]) && !unk_0x191BE1BC8F26F3C1(iLocal_100[1], 0)) && unk_0xB8DE76287EDC4957(iLocal_99[1], 0)) && unk_0xA8D0477084E86A92(iLocal_100[1], iLocal_99[1], 0)) && unk_0xB8DE76287EDC4957(iLocal_92, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_100[1], 579380604) != 1 && unk_0x78F50AA8F955BEFC(iLocal_100[1], 579380604) != 2)
					{
						unk_0x23E30E165964B11A(iLocal_100[1], unk_0xFC1458A37D98B502());
					}
				}
				if (unk_0x21B6FFFD04C9FF3A(iLocal_100[1], unk_0xFC1458A37D98B502(), 10f, 10f, 5f, 0, 1, 0))
				{
					iLocal_878 = 1;
				}
			}
			break;
		
		case 4:
			iLocal_77 = func_233();
			if (iLocal_77 != 6)
			{
				if (iLocal_77 != iLocal_78)
				{
					func_231(&(Local_808[0 /*25*/]), 1, func_232(iLocal_77));
					func_231(&(Local_808[1 /*25*/]), 2, func_232(iLocal_77));
					if (unk_0x6ADD12BF4D6D2587(iLocal_99[1]))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_99[1]))
						{
							unk_0x7674774BB9279265(iLocal_99[1]);
						}
					}
				}
				iLocal_78 = iLocal_77;
			}
			func_228(1);
			if (!iLocal_889)
			{
				if ((system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_99[0], 1)) < 100f || system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_99[1], 1)) < 100f) && unk_0x90D5DFB054818BA7(iLocal_92) < 7f)
				{
					iLocal_889 = 1;
				}
			}
			else if (unk_0x90D5DFB054818BA7(iLocal_92) > 10f)
			{
				iLocal_889 = 0;
			}
			break;
		
		case 5:
			func_234(0, &uLocal_758, 301, "famtwo", 0, 0);
			func_234(1, &uLocal_783, 302, "famtwo", 0, 0);
			break;
		
		case 6:
			if (!iLocal_876)
			{
				func_234(0, &uLocal_834, 401, "famtwo", 1, 0);
				func_234(1, &uLocal_853, 402, "famtwo", 1, 0);
				if (!bLocal_890)
				{
					if (fLocal_887 > 0,1f)
					{
						fLocal_887 = (fLocal_887 - 0,01f);
					}
					else
					{
						fLocal_887 = 0,1f;
					}
				}
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_143, vLocal_144, fLocal_145, 0, 1, 0))
				{
					iVar4 = 0;
					while (iVar4 < iLocal_100)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[iVar4]))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_100[iVar4]);
							unk_0x2931C350CED41AD3(iLocal_100[iVar4], iLocal_99[iVar4], -901,3011f, -1359,937f, 0f, 14, 20f, 262144, 3f, 3f, 1);
						}
						iVar4++;
					}
					iLocal_876 = 1;
				}
			}
			break;
	}
	func_224(0);
	func_224(1);
	if ((iLocal_73 == 6 || iLocal_73 == 7) || iLocal_876)
	{
		if (!bLocal_877)
		{
			bLocal_877 = true;
		}
	}
	else if (bLocal_877)
	{
		bLocal_877 = false;
	}
}

void func_224(int iParam0)//Position - 0x23B05
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xB8DE76287EDC4957(iLocal_92, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_101[iParam0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[iParam0]))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_99[iParam0], 0) && unk_0xA8D0477084E86A92(iLocal_100[iParam0], iLocal_99[iParam0], 0))
				{
					iLocal_101[iParam0] = func_209(unk_0xB3328BA8976B416C(iLocal_99[iParam0], 1), 0);
					unk_0x62BD54E491535B76(iLocal_101[iParam0], "FM2_PURSUER");
					unk_0x0C71C8E276E3EC54(iLocal_101[iParam0], 1);
					unk_0xF27F72CA15E148EE(iLocal_101[iParam0], 9);
					iLocal_880[iParam0] = 1;
				}
				else
				{
					iLocal_101[iParam0] = func_151(iLocal_100[iParam0], 1, 145);
					iLocal_880[iParam0] = 0;
				}
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[iParam0]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_99[iParam0], 0) && unk_0xA8D0477084E86A92(iLocal_100[iParam0], iLocal_99[iParam0], 0))
			{
				if (iLocal_880[iParam0])
				{
					vVar0 = { unk_0x67247AA13B7486A3(iLocal_101[iParam0]) };
					vVar1 = { unk_0xB3328BA8976B416C(iLocal_99[iParam0], 1) };
					vVar0.x = (vVar0.x + ((vVar1.x - vVar0.x) / 25f));
					vVar0.y = (vVar0.y + ((vVar1.y - vVar0.y) / 25f));
					vVar0.z = (vVar0.z + ((vVar1.z - vVar0.z) / 25f));
					unk_0x645FF8D8B599FD84(iLocal_101[iParam0], vVar0);
				}
				else
				{
					unk_0xE30CF11C0EE14316(&(iLocal_101[iParam0]));
				}
			}
			else if (iLocal_880[iParam0])
			{
				unk_0xE30CF11C0EE14316(&(iLocal_101[iParam0]));
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(iLocal_101[iParam0]))
		{
			unk_0xE30CF11C0EE14316(&(iLocal_101[iParam0]));
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(iLocal_101[iParam0]))
	{
		unk_0xE30CF11C0EE14316(&(iLocal_101[iParam0]));
	}
}

int func_225(vector3 vParam0)//Position - 0x23CCA
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_226(vector3 vParam0, int iParam1, char* sParam2, var uParam3, bool bParam4)//Position - 0x23CF4
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = func_227(vParam0, uParam3);
	fVar1 = (unk_0x3413A86ABE2F138E(iParam1, sParam2) / IntToFloat((*uParam3 - 1)));
	fVar2 = (unk_0xF0783EA789587B6B(vParam0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 + 1 /*3*/]), 1) * fVar1);
	if (bParam4)
	{
	}
	return ((fVar2 + (IntToFloat(iVar0) * fVar1)) - 0,1f);
}

int func_227(vector3 vParam0, var uParam1)//Position - 0x23D4D
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < (*uParam1 - 1))
	{
		if (system::vdist2(unk_0x1F6BCB690FB61F9A(vParam0, *(uParam1[iVar0 /*3*/]), *(uParam1[iVar0 + 1 /*3*/]), 1), vParam0) < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = system::vdist2(unk_0x1F6BCB690FB61F9A(vParam0, *(uParam1[iVar0 /*3*/]), *(uParam1[iVar0 + 1 /*3*/]), 1), vParam0);
		}
		iVar0++;
	}
	return iVar1;
}

void func_228(int iParam0)//Position - 0x23DC6
{
	if (bLocal_873)
	{
		func_234(iParam0, &(Local_808[0 /*25*/]), 1, func_232(iLocal_78), 0, 1);
	}
	else
	{
		func_234(iParam0, &(Local_808[1 /*25*/]), 2, func_232(iLocal_78), 0, 1);
	}
	if ((unk_0x53C562FD2B9E3AB0() - iLocal_879) > 500)
	{
		bLocal_873 = func_229(iLocal_78);
		iLocal_879 = unk_0x53C562FD2B9E3AB0();
	}
}

bool func_229(int iParam0)//Position - 0x23E1F
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xCE3B2111021F7234(unk_0xFC1458A37D98B502()) };
	vVar1 = { func_230(vLocal_638[iParam0 /*3*/] - vLocal_637[iParam0 /*3*/]) };
	return unk_0xE97272C977DEADD3(unk_0xAF3D7D969F2C195C(vVar1.x, vVar1.y, vVar0.x, vVar0.y)) < 90f;
}

Vector3 func_230(vector3 vParam0)//Position - 0x23E68
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_231(var uParam0, int iParam1, char* sParam2)//Position - 0x23EA7
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	unk_0x0D9525F20FB71C52(iParam1, sParam2);
	if (unk_0x0840F461D7BD8859(iParam1, sParam2))
	{
		fVar0 = unk_0x3413A86ABE2F138E(iParam1, sParam2);
		fVar1 = (fVar0 / IntToFloat((*uParam0 - 1)));
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { unk_0xE0236CBCD003C392(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

char* func_232(int iParam0)//Position - 0x23F01
{
	switch (iParam0)
	{
		case 0:
			return "famtwoCanalsbottom";
			break;
		
		case 1:
			return "famtwoCanalstop";
			break;
		
		case 2:
			return "famtwoCanalsLeft";
			break;
		
		case 3:
			return "famtwoCanalsMiddle";
			break;
		
		case 4:
			return "famtwoCanalsRight";
			break;
	}
	return "famtwoCanalsbottom";
}

int func_233()//Position - 0x23F64
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_637[iVar0 /*3*/], vLocal_638[iVar0 /*3*/], fLocal_639[iVar0], 0, 1, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 6;
}

void func_234(int iParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x23FAB
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	if ((((((!unk_0x3AB6A1A9084FB0A4(iLocal_100[iParam0]) && !unk_0x191BE1BC8F26F3C1(iLocal_100[iParam0], 0)) && unk_0x6ADD12BF4D6D2587(iLocal_99[iParam0])) && unk_0xB8DE76287EDC4957(iLocal_99[iParam0], 0)) && unk_0xA8D0477084E86A92(iLocal_100[iParam0], iLocal_99[iParam0], 0)) && unk_0xB8DE76287EDC4957(iLocal_92, 0)) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
	{
		fVar0 = func_226(unk_0xB3328BA8976B416C(iLocal_99[iParam0], 1), iParam2, sParam3, uParam1, 0);
		fVar1 = func_226(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), iParam2, sParam3, uParam1, 0);
		vVar2 = { unk_0xE0236CBCD003C392(iParam2, fVar0, sParam3) };
		vVar3 = { unk_0xE0236CBCD003C392(iParam2, fVar1, sParam3) };
		if (!iLocal_872[iParam0])
		{
			if (!bLocal_890)
			{
				if (((fVar0 < fVar1 && !unk_0x9E06F0EE20F58CED(unk_0xB3328BA8976B416C(iLocal_99[iParam0], 1), 3f)) && !unk_0x9E06F0EE20F58CED(vVar2, 3f)) && system::vdist2(vVar3, unk_0xB3328BA8976B416C(iLocal_99[iParam0], 1)) > 25f)
				{
					unk_0x391612227A0274F1();
					unk_0x7674774BB9279265(iLocal_99[iParam0]);
					unk_0x8D7ABC97ED508270(iLocal_99[iParam0], iParam2, sParam3, 1);
					unk_0xB426CADC4A19964C(iLocal_99[iParam0], 0f, 0f, 0,1f);
					unk_0x7A1DBB5E36EE3379(iLocal_99[iParam0], func_235((fVar0 + (IntToFloat(iParam0) * 0,5f)), 0f, 999999f));
					iLocal_872[iParam0] = 1;
				}
			}
			if (iLocal_73 != 2)
			{
				iLocal_874[iParam0] = fVar0 > fVar1;
			}
			else
			{
				iLocal_874[iParam0] = 0;
			}
		}
		else
		{
			fVar4 = system::vdist2(vVar3, vVar2);
			fVar5 = 999999f;
			if (!unk_0x191BE1BC8F26F3C1(iLocal_99[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_99[1], 0))
			{
				fVar5 = system::vdist2(unk_0xB3328BA8976B416C(iLocal_99[0], 1), unk_0xB3328BA8976B416C(iLocal_99[1], 1));
			}
			if (((((unk_0x9E06F0EE20F58CED(unk_0xB3328BA8976B416C(iLocal_99[iParam0], 1), 3f) && (fVar4 < 25f || iParam4)) || fVar4 < 9f) || fVar0 > fVar1) || !unk_0x8DDE799D31A3D099(iLocal_99[iParam0])) || fVar5 < (1,5f * 1,5f))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_99[iParam0]))
				{
					unk_0xD6B1A8B2DA10C9B7(iLocal_99[iParam0], 262144);
				}
				else
				{
					unk_0x5CA96D6783EE6897(iLocal_99[iParam0], iParam2, sParam3, 20f, 262144);
				}
				if (iParam5 && (fVar0 > 0,85f || fVar0 < 0,15f))
				{
				}
				unk_0x23E30E165964B11A(iLocal_100[iParam0], unk_0xFC1458A37D98B502());
				iLocal_872[iParam0] = 0;
			}
			else
			{
				fVar6 = 40f;
				if (iParam5 && (fVar0 > 0,8f || fVar0 < 0,2f))
				{
					fVar7 = 1f;
					unk_0x3998782E46B46C7F(iLocal_99[iParam0], func_235(((system::vdist(unk_0xB3328BA8976B416C(iLocal_99[iParam0], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) * (fVar7 / fVar6)) * fLocal_887), 0,2f, fVar7));
				}
				else
				{
					fVar7 = 1,3f;
					unk_0x3998782E46B46C7F(iLocal_99[iParam0], func_235(((system::vdist(unk_0xB3328BA8976B416C(iLocal_99[iParam0], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) * (fVar7 / fVar6)) * fLocal_887), 0,8f, fVar7));
				}
			}
		}
	}
	else if (unk_0x6ADD12BF4D6D2587(iLocal_99[iParam0]))
	{
		if (unk_0x8DDE799D31A3D099(iLocal_99[iParam0]))
		{
			unk_0x7674774BB9279265(iLocal_99[iParam0]);
		}
	}
}

float func_235(float fParam0, float fParam1, float fParam2)//Position - 0x2432E
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_236()//Position - 0x24355
{
	if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
	{
		switch (iLocal_882)
		{
			case 0:
				if (!iLocal_884)
				{
					func_238("FM2_JSHLP1", 12000);
					iLocal_883 = unk_0x53C562FD2B9E3AB0();
					iLocal_884 = 1;
				}
				if (unk_0xF2B58F79D29425B4(0, 71))
				{
					fLocal_886 = (fLocal_886 + unk_0x46C19C2753391FBF());
				}
				if (fLocal_886 > 3f || (unk_0x53C562FD2B9E3AB0() - iLocal_883) > 10000)
				{
					fLocal_886 = 0f;
					iLocal_882++;
				}
				break;
			
			case 1:
				if (func_237("FM2_JSHLP1"))
				{
					if (!iLocal_885)
					{
						unk_0x3E80C2F7BC665259(0);
						iLocal_885 = 1;
					}
				}
				else
				{
					iLocal_883 = unk_0x53C562FD2B9E3AB0();
					iLocal_882++;
				}
				break;
			
			case 2:
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_883) > 2000)
				{
					iLocal_884 = 0;
					iLocal_885 = 0;
					iLocal_882++;
				}
				break;
			
			case 3:
				if (!iLocal_884)
				{
					func_238("FM2_JSHLP2", 12000);
					iLocal_883 = unk_0x53C562FD2B9E3AB0();
					iLocal_884 = 1;
				}
				if (unk_0xF2B58F79D29425B4(0, 72))
				{
					fLocal_886 = (fLocal_886 + unk_0x46C19C2753391FBF());
				}
				if (fLocal_886 > 1f || (unk_0x53C562FD2B9E3AB0() - iLocal_883) > 10000)
				{
					iLocal_882++;
				}
				break;
			
			case 4:
				if (func_237("FM2_JSHLP2"))
				{
					if (!iLocal_885)
					{
						iLocal_885 = 1;
						unk_0x3E80C2F7BC665259(0);
					}
				}
				else
				{
					iLocal_882++;
				}
				break;
			
			case 5:
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_883) > 2000)
				{
					iLocal_884 = 0;
					iLocal_885 = 0;
					iLocal_882++;
				}
				break;
			
			case 6:
				if (!iLocal_884)
				{
					func_238("FM2_JSHLP3", 12000);
					iLocal_883 = unk_0x53C562FD2B9E3AB0();
					iLocal_884 = 1;
				}
				if (unk_0xF2B58F79D29425B4(0, 76))
				{
					fLocal_886 = (fLocal_886 + unk_0x46C19C2753391FBF());
				}
				if (fLocal_886 > 2f || (unk_0x53C562FD2B9E3AB0() - iLocal_883) > 7500)
				{
					fLocal_886 = 0f;
					iLocal_882++;
				}
				break;
			
			case 7:
				if (func_237("FM2_JSHLP3"))
				{
					if (!iLocal_885)
					{
						unk_0x3E80C2F7BC665259(0);
						iLocal_885 = 1;
					}
				}
				else
				{
					iLocal_883 = unk_0x53C562FD2B9E3AB0();
					iLocal_882++;
				}
				break;
		}
	}
	else if ((func_237("FM2_JSHLP1") || func_237("FM2_JSHLP2")) || func_237("FM2_JSHLP3"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
}

int func_237(char* sParam0)//Position - 0x245A6
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_238(char* sParam0, int iParam1)//Position - 0x245B9
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_239()//Position - 0x245D0
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	
	if (unk_0xB8DE76287EDC4957(iLocal_92, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if ((unk_0xB8DE76287EDC4957(iLocal_99[iVar0], 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_100[iVar0])) && unk_0xAAA8D20859E2D36D(iLocal_100[iVar0], iLocal_99[iVar0]))
			{
				vVar1 = { unk_0xB3328BA8976B416C(iLocal_99[iVar0], 1) };
				vVar2 = { unk_0xB3328BA8976B416C(iLocal_92, 1) };
				if (system::vdist2(vVar2, Local_561[0 /*7*/]) > 100f && system::vdist2(vVar2, Local_561[1 /*7*/]) > 100f)
				{
					if (system::vdist2(vVar2, Local_561[iVar0 /*7*/]) > 400f)
					{
						if (func_240(iLocal_99[iVar0], iLocal_92, iLocal_107, vVar2, unk_0xDB824D597B53CC40(iLocal_92, 2)))
						{
							Local_561[iVar0 /*7*/] = { vVar2 };
							Local_561[iVar0 /*7*/].f_3 = { unk_0xDB824D597B53CC40(iLocal_92, 2) };
							Local_561[iVar0 /*7*/].f_6 = system::vmag(unk_0x8FD9FCCB6E4BD999(iLocal_99[iVar0]));
						}
					}
				}
				if (!func_225(Local_561[iVar0 /*7*/]) && Local_561[iVar0 /*7*/].f_2 < 1f)
				{
					if (!unk_0xEC211A86AB3726B6(iLocal_99[iVar0]))
					{
						iLocal_563[iVar0] = unk_0x53C562FD2B9E3AB0();
					}
					else if ((unk_0x53C562FD2B9E3AB0() - iLocal_563[iVar0]) > 1000 && (unk_0x53C562FD2B9E3AB0() - iLocal_562[iVar0]) > 2000)
					{
						if (!unk_0x9E06F0EE20F58CED(Local_561[iVar0 /*7*/], 3f) && !unk_0x9E06F0EE20F58CED(vVar1, 3f))
						{
							fVar3 = 99f;
							iVar4 = 0;
							if (iVar0 == 0)
							{
								iVar4 = 1;
							}
							if (unk_0xB8DE76287EDC4957(iLocal_99[iVar4], 0))
							{
								fVar3 = system::vdist(unk_0xB3328BA8976B416C(iLocal_99[iVar4], 1), Local_561[iVar0 /*7*/]);
							}
							if ((((system::vdist2(vVar1, vVar2) > 225f && system::vdist2(vVar1, Local_561[iVar0 /*7*/]) < system::vdist2(vVar1, vVar2)) && system::vdist2(vVar2, Local_561[iVar0 /*7*/]) > 225f) && fVar3 > 5f) && func_240(iLocal_99[iVar0], iLocal_92, iLocal_107, Local_561[iVar0 /*7*/], Local_561[iVar0 /*7*/].f_3))
							{
								unk_0x60225D4F755DFDB1(Local_561[iVar0 /*7*/], 3f, 0);
								unk_0x9B8406983378711E(Local_561[iVar0 /*7*/], 3f, 0, 0, 0, 0, false, 0);
								unk_0xBD8D47FDC6902B2D(iLocal_99[iVar0], Local_561[iVar0 /*7*/], 1, false, 0, 1);
								unk_0x59AF3B40AE222194(iLocal_99[iVar0], Local_561[iVar0 /*7*/].f_3, 2, 1);
								unk_0xFB2E9855F95E3BD3(iLocal_99[iVar0], (Local_561[iVar0 /*7*/].f_6 + 5f));
								unk_0x23E30E165964B11A(iLocal_100[iVar0], unk_0xFC1458A37D98B502());
								unk_0xA15269351F50F113(iLocal_99[iVar0], true, 1, 0);
								iLocal_562[iVar0] = unk_0x53C562FD2B9E3AB0();
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_240(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam4)//Position - 0x248C2
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	
	if (unk_0x6ADD12BF4D6D2587(iParam2))
	{
		unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &vVar3, &vVar4);
		unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam1), &vVar5, &uVar6);
		fVar7 = unk_0xE97272C977DEADD3((vVar4.z - vVar3.z));
		fVar8 = unk_0xE97272C977DEADD3((vVar4.x - vVar3.x));
		fVar9 = unk_0xE97272C977DEADD3((vVar4.y - vVar3.y));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - unk_0xE97272C977DEADD3(vVar3.z));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - unk_0xE97272C977DEADD3(vVar3.x));
		}
		vVar12.z = (vVar12.z + (vVar5.z - vVar3.z));
		unk_0xBD8D47FDC6902B2D(iParam2, vParam3, 1, false, 0, 1);
		unk_0x59AF3B40AE222194(iParam2, vParam4, 2, 1);
		vVar1 = { unk_0x3F90543934DCD7E6(iParam2, Vector((fVar11 * 1,25f), ((fVar9 / 2f) - (fVar10 * 0,75f)), 0f) + vVar12) };
		vVar2 = { unk_0x3F90543934DCD7E6(iParam2, Vector((fVar11 * 1,25f), ((-fVar9 / 2f) + (fVar10 * 0,75f)), 0f) + vVar12) };
		iVar17 = unk_0xFF32E7A273D539FD(vVar2, vVar1, fVar10, 19, unk_0xFC1458A37D98B502(), 4);
		if (unk_0x16ACABF450EB00B4(iVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_241(bool bParam0, float fParam1)//Position - 0x249F8
{
	if (bParam0)
	{
		unk_0x2B4FD5317555D7F9(fParam1);
		unk_0x58DBAF325A5B6E01(0,35f);
		unk_0x4B938EFE8C089F29(0,3f);
		unk_0x8EEB0AB5E95ED287(0,25f);
		unk_0x3DE36D54F079EC75(0,35f);
		unk_0xD9C3FEA1BF670F28(0,4f);
		unk_0xE664FBDE7B18CD1F(0,25f);
		unk_0x94419BC1197585E3(0,55f);
		unk_0x299BD393E7A43252(0,45f);
		unk_0x494DB6428297B71F(0,5f);
		unk_0x5B8EE726D2CA462D(0,6f);
		unk_0x07F495BC41AE8894(0,25f);
		unk_0xD073650F5916A822(0,75f);
	}
	else
	{
		unk_0x8E3DB2278325463E(fParam1);
	}
}

void func_242()//Position - 0x24A80
{
	vLocal_637[0 /*3*/] = { -1237,274f, -923,97f, 5,135533f };
	vLocal_638[0 /*3*/] = { -985,1348f, -1359,68f, -7,479084f };
	fLocal_639[0] = 23f;
	vLocal_637[1 /*3*/] = { -1003,908f, -914,4536f, -1,611186f };
	vLocal_638[1 /*3*/] = { -880,5477f, -1124,602f, 6,150022f };
	fLocal_639[1] = 29f;
	vLocal_637[2 /*3*/] = { -1169,471f, -1027,087f, 5,78508f };
	vLocal_638[2 /*3*/] = { -1003,961f, -932,3284f, -2,993861f };
	fLocal_639[2] = 29f;
	vLocal_637[3 /*3*/] = { -1116,554f, -1119,791f, 5,784778f };
	vLocal_638[3 /*3*/] = { -950,7761f, -1023,823f, -1,496439f };
	fLocal_639[3] = 29f;
	vLocal_637[4 /*3*/] = { -1062,391f, -1213,474f, -2,315868f };
	vLocal_638[4 /*3*/] = { -897,3085f, -1116,901f, 4,92553f };
	fLocal_639[4] = 29f;
}

void func_243()//Position - 0x24BA5
{
	vLocal_632[0 /*3*/] = { -2033,74f, -1004,776f, 1f };
	vLocal_632[1 /*3*/] = { -1801,432f, -975,5541f, 1f };
	vLocal_632[2 /*3*/] = { -1796,255f, -988,166f, 1f };
	vLocal_632[3 /*3*/] = { -2012,245f, -1073,776f, 1f };
	vLocal_633[5 /*3*/] = { -1241,138f, -933,0004f, 1f };
	vLocal_633[4 /*3*/] = { -1227,203f, -924,2169f, 1f };
	vLocal_633[3 /*3*/] = { -1240,015f, -751,6861f, 1f };
	vLocal_633[2 /*3*/] = { -1431,875f, -747,558f, 1f };
	vLocal_633[1 /*3*/] = { vLocal_632[1 /*3*/] };
	vLocal_633[0 /*3*/] = { vLocal_632[2 /*3*/] };
	vLocal_634[0 /*3*/] = { -988,3516f, -908,0377f, 1f };
	vLocal_634[1 /*3*/] = { -866,9206f, -1116,04f, 1f };
	vLocal_634[2 /*3*/] = { -978,9424f, -1351,054f, 1f };
	vLocal_634[3 /*3*/] = { -1007,62f, -1362,316f, 1f };
	vLocal_634[4 /*3*/] = { vLocal_633[5 /*3*/] };
	vLocal_634[5 /*3*/] = { vLocal_633[4 /*3*/] };
	vLocal_635[0 /*3*/] = { vLocal_634[3 /*3*/] };
	vLocal_635[1 /*3*/] = { vLocal_634[2 /*3*/] };
	vLocal_635[2 /*3*/] = { -844,5858f, -1302,006f, 4,1001f };
	vLocal_635[3 /*3*/] = { -768,9856f, -1524,338f, 4,98f };
	vLocal_635[4 /*3*/] = { -1052,374f, -1553,313f, 13,0317f };
	vLocal_636[0 /*3*/] = { vLocal_635[4 /*3*/] };
	vLocal_636[1 /*3*/] = { vLocal_635[3 /*3*/] };
	vLocal_636[2 /*3*/] = { -1165,894f, -1923,179f, 2,5698f };
	vLocal_636[3 /*3*/] = { -1226,947f, -1873,531f, 4,8338f };
}

void func_244(bool bParam0)//Position - 0x24D84
{
	if (bParam0)
	{
		Global_15812 = 1;
	}
	else
	{
		Global_15812 = 0;
	}
}

void func_245(var uParam0, int iParam1)//Position - 0x24D9C
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_246()//Position - 0x24DB9
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iLocal_91[0]))
	{
		unk_0x6FF834D85E2DD4C6(joaat("csb_porndudes"));
		if (unk_0x9A0B2ED5055D3F0B(joaat("csb_porndudes")))
		{
			iLocal_91[0] = unk_0xAC992EFAD62C33BF(26, joaat("csb_porndudes"), -2028,336f, -1026,387f, 0,0897f, 222,4424f, 1, true);
			if (bLocal_115)
			{
				iVar0 = 0;
				while (iVar0 < 12)
				{
					unk_0x03924C68EFCBC511(iLocal_91[0], iVar0, vLocal_116[iVar0 /*3*/][0], vLocal_116[iVar0 /*3*/][1], 0);
					iVar0++;
				}
			}
			unk_0xFF96DC2FA12B7785(iLocal_91[0], 0);
			unk_0xAE6EBBBBD8B9FB30(iLocal_91[0], 17, true);
			unk_0xC820D40994BFF79C(iLocal_91[0], 1,75f);
			unk_0x771A86309E0CA47B(iLocal_91[0], 1);
			unk_0x60C06BFD037BB7CF(iLocal_91[0], unk_0xFC1458A37D98B502(), -1, 4, 3);
		}
	}
	return unk_0x6ADD12BF4D6D2587(iLocal_91[0]);
}

int func_247()//Position - 0x24E86
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		unk_0x0D9525F20FB71C52(1, func_232(iVar1));
		unk_0x0D9525F20FB71C52(2, func_232(iVar1));
		if (!unk_0x0840F461D7BD8859(1, func_232(iVar1)) || !unk_0x0840F461D7BD8859(2, func_232(iVar1)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_248(int iParam0, bool bParam1)//Position - 0x24EDF
{
	vector3 vVar0;
	float fVar1;
	var uVar2;
	
	unk_0x6FF834D85E2DD4C6(joaat("seashark"));
	unk_0x6FF834D85E2DD4C6(joaat("csb_porndudes"));
	if (unk_0x9A0B2ED5055D3F0B(joaat("seashark")) && unk_0x9A0B2ED5055D3F0B(joaat("csb_porndudes")))
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_99[iParam0]))
		{
			if (iParam0 == 0)
			{
				if (bParam1)
				{
					vVar0 = { -2023,64f, -1047,04f, 0,6916f };
					fVar1 = -108f;
				}
				else
				{
					vVar0 = { -2024,716f, -1046,387f, 0f };
					fVar1 = -108,9627f;
				}
			}
			else if (bParam1)
			{
				vVar0 = { -2027,4f, -1045,88f, 0,6916f };
				fVar1 = -108f;
			}
			else
			{
				vVar0 = { -2021,2f, -1046,926f, 0f };
				fVar1 = -84,578f;
			}
			if (unk_0x975F66A6E78FEBD9(vVar0, &uVar2))
			{
				vVar0.z = uVar2;
				iLocal_99[iParam0] = unk_0xEA60F3B426BB095B(joaat("seashark"), vVar0, fVar1, 1, 1, 0);
				if (iParam0 == 0)
				{
					unk_0x207466E78DA21033(iLocal_99[iParam0], 3);
				}
				else
				{
					unk_0x207466E78DA21033(iLocal_99[iParam0], 1);
				}
				unk_0x6D84D8D7F4D9687D(iLocal_99[iParam0], 100f);
				unk_0x47F820A3F8998340(iLocal_99[iParam0], bParam1);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_99[iParam0]) && unk_0xB8DE76287EDC4957(iLocal_99[iParam0], 0))
		{
			unk_0xFBA991D3A851E195(iLocal_99[iParam0], 1);
			unk_0xD38F266C132F2897(iLocal_99[iParam0], false, false, false, true, true, 0, 0, 0);
			unk_0x4BEFCD5DAE410A90(iLocal_99[iParam0], 3);
			if (bParam1)
			{
				unk_0xA15269351F50F113(iLocal_99[iParam0], false, 1, 0);
			}
			else
			{
				unk_0xA15269351F50F113(iLocal_99[iParam0], true, 1, 0);
			}
			unk_0xAC62CE49044A35B9(iLocal_99[iParam0], 0);
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_100[iParam0]) && unk_0xB8DE76287EDC4957(iLocal_99[iParam0], 0))
		{
			if (!bParam1)
			{
				iLocal_100[iParam0] = unk_0x00D1A9572426E8DD(iLocal_99[iParam0], 26, joaat("csb_porndudes"), -1, 1, true);
			}
			else
			{
				iLocal_100[iParam0] = unk_0xAC992EFAD62C33BF(26, joaat("csb_porndudes"), Vector(10,9101f, -1024,399f, -2068,027f) + Vector(0f, 0f, IntToFloat(iParam0)), 0f, 1, true);
			}
		}
		if (((unk_0x6ADD12BF4D6D2587(iLocal_100[iParam0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_100[iParam0])) && unk_0x6ADD12BF4D6D2587(iLocal_99[iParam0])) && unk_0xB8DE76287EDC4957(iLocal_99[iParam0], 0))
		{
			if (!bParam1)
			{
				unk_0xEDC33A771FAEB393(iLocal_100[iParam0], false);
				if (!unk_0xA8D0477084E86A92(iLocal_100[iParam0], iLocal_99[iParam0], 0))
				{
					unk_0xBB0358802AA14401(iLocal_100[iParam0], iLocal_99[iParam0], -1);
				}
			}
			else
			{
				unk_0xEDC33A771FAEB393(iLocal_100[iParam0], true);
			}
			unk_0x66698545014E2F21(iLocal_100[iParam0], 1);
			unk_0xD38F266C132F2897(iLocal_100[iParam0], false, false, false, true, true, 0, 0, 0);
			unk_0x9E058151726E58DE(iLocal_100[iParam0], joaat("weapon_pistol"), -1, false, true);
			unk_0xAE6EBBBBD8B9FB30(iLocal_100[iParam0], 3, false);
			unk_0xAE6EBBBBD8B9FB30(iLocal_100[iParam0], 1, true);
			unk_0x2C8C730E9565B998(iLocal_100[iParam0], 0);
			unk_0xD1D0B4122585CC63(iLocal_100[iParam0], 2);
			unk_0xBB3CC641B6AED5E5(iLocal_100[iParam0], 0);
			unk_0xEA4C3AEAE49593B4(iLocal_100[iParam0], 15);
			unk_0xCFF0CD14B439821D(iLocal_100[iParam0], 1, 1);
			unk_0xFBA991D3A851E195(iLocal_100[iParam0], 1);
			unk_0xC854D7A2E956B946(iLocal_100[iParam0], 0);
			unk_0xBC73FE7BBDFE91FC(iLocal_100[iParam0], 1);
			unk_0xCE93FCB8A8D8DF0B(iLocal_100[iParam0], iLocal_79);
			unk_0x07224EEE13A1B6AE(iLocal_100[iParam0], 0);
			if (iParam0 == 0)
			{
				unk_0x03924C68EFCBC511(iLocal_100[iParam0], 0, 2, 0, 0);
				unk_0x03924C68EFCBC511(iLocal_100[iParam0], 3, 2, 0, 0);
				unk_0x03924C68EFCBC511(iLocal_100[iParam0], 4, 2, 0, 0);
				unk_0x0B652E456D6A7E32(iLocal_100[iParam0], 0, 0, 0, false);
			}
			else
			{
				unk_0x03924C68EFCBC511(iLocal_100[iParam0], 0, 1, 0, 0);
				unk_0x03924C68EFCBC511(iLocal_100[iParam0], 3, 1, 0, 0);
				unk_0x03924C68EFCBC511(iLocal_100[iParam0], 4, 1, 0, 0);
				unk_0x0B652E456D6A7E32(iLocal_100[iParam0], 1, 1, 0, false);
			}
		}
	}
	if ((((unk_0x6ADD12BF4D6D2587(iLocal_100[iParam0]) && unk_0x6ADD12BF4D6D2587(iLocal_99[iParam0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_100[iParam0])) && unk_0xB8DE76287EDC4957(iLocal_99[iParam0], 0)) && (unk_0xA8D0477084E86A92(iLocal_100[iParam0], iLocal_99[iParam0], 0) || bParam1))
	{
		return 1;
	}
	return 0;
}

int func_249()//Position - 0x252EC
{
	unk_0x0D9525F20FB71C52(101, "famtwo");
	unk_0x0D9525F20FB71C52(102, "famtwo");
	unk_0x0D9525F20FB71C52(201, "famtwo");
	unk_0x0D9525F20FB71C52(202, "famtwo");
	unk_0x0D9525F20FB71C52(301, "famtwo");
	unk_0x0D9525F20FB71C52(302, "famtwo");
	unk_0x0D9525F20FB71C52(1, "famtwoCanalsAlt");
	unk_0x0D9525F20FB71C52(1, "famtwoplayer");
	if ((((((unk_0x0840F461D7BD8859(101, "famtwo") && unk_0x0840F461D7BD8859(102, "famtwo")) && unk_0x0840F461D7BD8859(201, "famtwo")) && unk_0x0840F461D7BD8859(202, "famtwo")) && unk_0x0840F461D7BD8859(301, "famtwo")) && unk_0x0840F461D7BD8859(302, "famtwo")) && unk_0x0840F461D7BD8859(1, "famtwoCanalsAlt"))
	{
		func_231(&uLocal_640, 101, "famtwo");
		func_231(&uLocal_653, 102, "famtwo");
		func_231(&uLocal_666, 201, "famtwo");
		func_231(&uLocal_712, 202, "famtwo");
		func_231(&uLocal_758, 301, "famtwo");
		func_231(&uLocal_783, 302, "famtwo");
		func_231(&uLocal_834, 401, "famtwo");
		func_231(&uLocal_853, 402, "famtwo");
		func_231(&uLocal_809, 1, "famtwoCanalsAlt");
		return 1;
	}
	return 0;
}

int func_250()//Position - 0x25429
{
	if (func_251(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), &vLocal_632, 0))
	{
		return 0;
	}
	if (func_251(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), &vLocal_633, 0))
	{
		return 1;
	}
	if (func_251(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), &vLocal_634, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_100[0], 0))
		{
			return 2;
		}
		else if (iLocal_878)
		{
			return 4;
		}
		else
		{
			return 3;
		}
	}
	if (func_251(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), &vLocal_635, 0))
	{
		return 5;
	}
	if (func_251(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), &vLocal_636, 0))
	{
		return 6;
	}
	return 7;
}

int func_251(vector3 vParam0, var uParam1, bool bParam2)//Position - 0x254DB
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 < 3)
	{
	}
	iVar0 = 1;
	if (!func_252(vParam0, *(uParam1[0 /*3*/]), *(uParam1[(*uParam1 - 1) /*3*/])))
	{
		if (bParam2)
		{
		}
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < (*uParam1 - 1))
	{
		if (!func_252(vParam0, *(uParam1[iVar1 + 1 /*3*/]), *(uParam1[iVar1 /*3*/])))
		{
			if (bParam2)
			{
			}
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_252(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5)//Position - 0x25551
{
	return (((Param4 - Param2) * (Param0.f_1 - Param2.f_1)) - ((Param4.f_1 - Param2.f_1) * (Param0 - Param2))) >= 0f;
}

void func_253()//Position - 0x2557A
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	
	switch (iLocal_159)
	{
		case 0:
			bLocal_902 = false;
			unk_0x0D9525F20FB71C52(1, "famtwoplayer");
			unk_0x0D9525F20FB71C52(101, "famtwo");
			unk_0x0D9525F20FB71C52(102, "famtwo");
			unk_0x6450931B826B49D9("missfam2_tracy_jetski");
			if (!unk_0x6C97EEC6339FB45C())
			{
				unk_0x393584863A2F304E("family_2_mcs_3", 8);
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			iLocal_901 = 0;
			break;
		
		case -1:
			unk_0xBC469A15B0FBB2B3("smboat");
			while (!unk_0xAB84FBE3AB3FFAD3("smBoat"))
			{
				system::wait(0);
			}
			iLocal_159 = 3;
			iLocal_155 = 0;
			break;
		
		case 1:
			if (unk_0x8AD07B6FC24F47C4())
			{
				func_2("Michael", unk_0xFC1458A37D98B502(), 0, 2);
				if (unk_0x6ADD12BF4D6D2587(iLocal_91[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[0]))
				{
					unk_0x6A39A6ADDC38ABE4("Guy_on_sofa", iLocal_91[0], 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_91[1]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[1]))
				{
					unk_0x6A39A6ADDC38ABE4("Man_getting_wood", iLocal_91[1], 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_91[2]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[2]))
				{
					func_2("Girl_on_sofa", iLocal_91[2], 0, 2);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_91[3]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[3]))
				{
					func_2("Girl_being_chatted_up", iLocal_91[3], 0, 2);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_88) && !unk_0x3AB6A1A9084FB0A4(iLocal_88))
				{
					func_2("Tracy", iLocal_88, 0, 2);
				}
				iLocal_159++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			if (func_248(0, 1) && func_248(1, 1))
			{
				iVar0 = 1;
			}
			if (iVar0 && unk_0x0840F461D7BD8859(1, "famtwoplayer"))
			{
				iLocal_159++;
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
			}
			break;
		
		case 3:
			if (func_193())
			{
				bLocal_115 = false;
				func_185(1, 1, 1, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
				{
					unk_0x4982ECE0928DA13D(iLocal_88, "Tracy", 0, 0, 0);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
				{
					unk_0x47F820A3F8998340(iLocal_92, false);
					unk_0x4982ECE0928DA13D(iLocal_92, "Michaels_seashark", 0, 0, 0);
					unk_0xA15269351F50F113(iLocal_92, false, 1, 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_106))
				{
					unk_0x4982ECE0928DA13D(iLocal_106, "Prop_MP3_Dock", 0, 0, 0);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[0]))
				{
					unk_0xEDC33A771FAEB393(iLocal_100[0], false);
					unk_0x5718F894FDA63A9E(iLocal_100[0], 1);
					unk_0x4982ECE0928DA13D(iLocal_100[0], "Porn_Dude", 0, 0, 0);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_100[1]))
				{
					unk_0xEDC33A771FAEB393(iLocal_100[1], false);
					unk_0x5718F894FDA63A9E(iLocal_100[1], 1);
					unk_0x4982ECE0928DA13D(iLocal_100[1], "Porn_Dude^1", 0, 0, 0);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_99[0], 0))
				{
					unk_0x4982ECE0928DA13D(iLocal_99[0], "Porn_Dude_seashark", 0, 0, 0);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_99[1], 0))
				{
					unk_0x4982ECE0928DA13D(iLocal_99[1], "Porn_Dude_^1_seashark", 0, 0, 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_91[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[0]))
				{
					unk_0xFF96DC2FA12B7785(iLocal_91[0], 0);
					unk_0xAE6EBBBBD8B9FB30(iLocal_91[0], 17, true);
					unk_0xC820D40994BFF79C(iLocal_91[0], 1,75f);
					unk_0x771A86309E0CA47B(iLocal_91[0], 1);
					unk_0x60C06BFD037BB7CF(iLocal_91[0], unk_0xFC1458A37D98B502(), -1, 4, 3);
					bLocal_115 = true;
					unk_0x4982ECE0928DA13D(iLocal_91[0], "Guy_on_sofa", 0, 0, 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_91[1]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[1]))
				{
					unk_0x4982ECE0928DA13D(iLocal_91[1], "Man_getting_wood", 0, 0, 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_91[2]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[2]))
				{
					unk_0x4982ECE0928DA13D(iLocal_91[2], "Girl_on_sofa", 0, 0, 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_91[3]) && !unk_0x3AB6A1A9084FB0A4(iLocal_91[3]))
				{
					unk_0x4982ECE0928DA13D(iLocal_91[3], "Girl_being_chatted_up", 0, 0, 0);
				}
				unk_0xD0BFA95B279C174F(2048);
				unk_0x84CDD933AFA470D2();
				unk_0x3E80C2F7BC665259(1);
				unk_0x0662098C9EF126B4(4);
				func_154();
				func_198(7);
				func_184();
				unk_0xAAB7D68F04F8C8BA("FAM2_NECK_GRAB");
				bLocal_899 = false;
				iLocal_900 = 0;
				iLocal_159++;
			}
			break;
		
		case 4:
			if (!unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
			{
				unk_0x59C3AC31C7544A28(500);
			}
			unk_0x247EAA2E93D4A021(-2006,247f, -1043,832f, -1,481001f, 200f, 1, 0, 0, false);
			iLocal_159++;
			break;
		
		case 5:
			if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
			{
				if (unk_0xBBC745B9F75E27D0("Tracy", 0))
				{
					if (!unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0))
					{
						unk_0xBB0358802AA14401(iLocal_88, iLocal_92, 0);
						unk_0x1A0806871323CD16(iLocal_88, true);
						unk_0x9A0C1F836B24E46E(iLocal_88, 0, 0);
					}
				}
				if (unk_0x65E1868AA01313FF(0))
				{
				}
				if (unk_0xBBC745B9F75E27D0("Porn_Dude", 0))
				{
				}
				if (unk_0xBBC745B9F75E27D0("Porn_Dude^1", 0))
				{
				}
				if (unk_0xBBC745B9F75E27D0("Porn_Dude_seashark", 0))
				{
				}
				if (unk_0xBBC745B9F75E27D0("Porn_Dude^1_seashark", 0))
				{
				}
				if (unk_0xBBC745B9F75E27D0("Michaels_seashark", 0))
				{
					if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
					{
						unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_92, -1);
					}
					func_241(1, 0f);
					unk_0x8D7ABC97ED508270(iLocal_92, 1, "famtwoplayer", 1);
					unk_0x3998782E46B46C7F(iLocal_92, 0,66f);
					unk_0xBB9A3C553EECB180(0f);
					unk_0x7C9705890EF6612E(0f, 1065353216);
					unk_0xBD8D47FDC6902B2D(iLocal_92, vLocal_129, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_92, fLocal_130);
					unk_0xA15269351F50F113(iLocal_92, true, 1, 0);
					unk_0xFB2E9855F95E3BD3(iLocal_92, 15f);
					unk_0x7674774BB9279265(iLocal_92);
					unk_0x975F66A6E78FEBD9(vLocal_129, &fLocal_903);
					if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
					{
						unk_0xBD8D47FDC6902B2D(iLocal_92, vLocal_129.x, vLocal_129.y, fLocal_903, 1, false, 0, 1);
						unk_0x48ED7B2293A96722(iLocal_92, fLocal_130);
						unk_0xA15269351F50F113(iLocal_92, true, 1, 0);
						unk_0xFB2E9855F95E3BD3(iLocal_92, 17f);
						unk_0xBB9A3C553EECB180(0f);
						unk_0x7C9705890EF6612E(0f, 1065353216);
					}
					iVar1 = 0;
					while (iVar1 < iLocal_99)
					{
						if (((unk_0x6ADD12BF4D6D2587(iLocal_99[iVar1]) && unk_0xB8DE76287EDC4957(iLocal_99[iVar1], 0)) && unk_0x6ADD12BF4D6D2587(iLocal_100[iVar1])) && !unk_0x3AB6A1A9084FB0A4(iLocal_100[iVar1]))
						{
							unk_0xEDC33A771FAEB393(iLocal_100[iVar1], false);
							unk_0x5718F894FDA63A9E(iLocal_100[iVar1], 1);
							unk_0x47F820A3F8998340(iLocal_99[iVar1], false);
							if (!unk_0xA8D0477084E86A92(iLocal_100[iVar1], iLocal_99[iVar1], 0))
							{
								unk_0xBB0358802AA14401(iLocal_100[iVar1], iLocal_99[iVar1], -1);
							}
							vVar2 = { unk_0xB3328BA8976B416C(iLocal_99[iVar1], 1) };
							unk_0x975F66A6E78FEBD9(vVar2, &fVar3);
							unk_0xBD8D47FDC6902B2D(iLocal_99[iVar1], vVar2.x, vVar2.y, fVar3, 1, false, 0, 1);
							unk_0xFB2E9855F95E3BD3(iLocal_99[iVar1], (10f + (2f * system::to_float(iVar1))));
						}
						iVar1++;
					}
					if (!unk_0xCE083D214C9DBEF1())
					{
						unk_0x4779448854314440(0);
						iLocal_112 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", false);
						unk_0x6ED5DDE95A2ACDCB(iLocal_112, 1);
						unk_0x6732DB0053C5E803(iLocal_112, unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -2023,174f, -1052,98f, 1,529f, 2,1162f, 0f, -39,8484f, 50f, 1, 2), 0, 3);
						unk_0x6732DB0053C5E803(iLocal_112, unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -2008,224f, -1037,217f, 1,8555f, -2,0921f, 0,0684f, -60,6791f, 50f, 1, 2), 1400, 1);
						unk_0x6732DB0053C5E803(iLocal_112, unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -1985,437f, -1024,533f, 2,0868f, -3,9139f, 0f, -78,7979f, 50f, 1, 2), 1850, 3);
						unk_0x7849794435F39D49(iLocal_112, true);
						unk_0xAA7DE567B3D55DDB(iLocal_112, unk_0xFC1458A37D98B502(), 0f, 0f, 0,3f, 1);
						unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
						func_179(&uLocal_521, unk_0xFC1458A37D98B502(), 0, 20f, 1000, 1000, 500, 0, 1045220557);
						system::settimerb(0);
					}
					else
					{
						bLocal_902 = true;
						unk_0x7674774BB9279265(iLocal_92);
						func_241(1, 0,1f);
						unk_0x975F66A6E78FEBD9(vLocal_129, &fLocal_903);
						if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
						{
							unk_0xBD8D47FDC6902B2D(iLocal_92, vLocal_129.x, vLocal_129.y, fLocal_903, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iLocal_92, fLocal_130);
							unk_0xA15269351F50F113(iLocal_92, true, 1, 0);
							unk_0xFB2E9855F95E3BD3(iLocal_92, 18f);
							unk_0xBB9A3C553EECB180(0f);
							unk_0x7C9705890EF6612E(0f, 1065353216);
						}
					}
				}
			}
			if (!bLocal_899)
			{
				if (unk_0xAAB7D68F04F8C8BA("FAM2_NECK_GRAB") && unk_0xE57A999388F7FD02() > 31250)
				{
					unk_0x8810DC630928B398("FAM2_NECK_GRAB");
					bLocal_899 = true;
				}
			}
			if (!iLocal_900)
			{
				if (unk_0xE57A999388F7FD02() > 9700)
				{
					unk_0xD4BB744A696E8ABF("SE_FAMILY_2_BOAT_RADIO", 0);
					iLocal_900 = 1;
				}
			}
			if (unk_0xE57A999388F7FD02() > 37500)
			{
				if (!iLocal_904)
				{
					func_241(1, 1065353216);
					iLocal_904 = 1;
				}
			}
			if (!iLocal_901)
			{
				if (unk_0xE57A999388F7FD02() > 45000)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_91[0]))
					{
						unk_0x6EF694689373EE8D(iLocal_91[0], -2097,867f, -973,0261f, -1f, 2f, -1, 1193033728, 1056964608);
						iLocal_901 = 1;
					}
				}
			}
			if (!bLocal_115)
			{
				if (unk_0x6ADD12BF4D6D2587(unk_0xF97566DFF9C0BB6A("Guy_on_sofa", 0)) && !unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(unk_0xF97566DFF9C0BB6A("Guy_on_sofa", 0))))
				{
					iVar4 = 0;
					while (iVar4 < 12)
					{
						vLocal_116[iVar4 /*3*/][0] = unk_0x4CDD2D1D66ED1DE4(unk_0x07F64790D10D1DB5(unk_0xF97566DFF9C0BB6A("Guy_on_sofa", 0)), iVar4);
						vLocal_116[iVar4 /*3*/][1] = unk_0xDCC2BD4C56470D10(unk_0x07F64790D10D1DB5(unk_0xF97566DFF9C0BB6A("Guy_on_sofa", 0)), iVar4);
						iVar4++;
					}
					bLocal_115 = true;
				}
			}
			else if (!unk_0x6ADD12BF4D6D2587(iLocal_91[0]))
			{
				func_246();
			}
			if (unk_0x65E1868AA01313FF(0))
			{
			}
			if (!unk_0x6C97EEC6339FB45C())
			{
				unk_0x61635C0A7950C875();
				unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
				if (unk_0x6ADD12BF4D6D2587(iLocal_106))
				{
					unk_0x452336926718D62A(&iLocal_106);
					unk_0x14776E43F90DD454(joaat("prop_mp3_dock"));
				}
				if (!bLocal_899)
				{
					unk_0x8810DC630928B398("FAM2_CS_SKIP");
				}
				func_185(0, 1, 1, 0);
				func_182();
				unk_0x404D1B8B95A0067E(unk_0x9EB17624F44A8DA4(), 1, 0);
				if (!bLocal_899)
				{
					unk_0xF4D9AAA3F4BCC684("FAM2_GRAB_NECK");
				}
				system::settimera(0);
				if (!bLocal_902)
				{
					iLocal_159++;
				}
				else
				{
					if (unk_0xB8DE76287EDC4957(iLocal_92, 0) && unk_0x8DDE799D31A3D099(iLocal_92))
					{
						unk_0x7674774BB9279265(iLocal_92);
					}
					func_201(7);
				}
			}
			break;
		
		case 6:
			if (unk_0x60584F41FBCE28CD() != 4 && unk_0x1FB367C588A91451() != 4)
			{
				if (system::timerb() > 2350)
				{
					unk_0x3458550DF8E9B453(false, true, 1500, 0, 0, 0);
				}
				if (system::timerb() > 2500)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_92))
						{
							unk_0x7674774BB9279265(iLocal_92);
						}
						func_201(7);
					}
				}
			}
			else if (system::timerb() > 2350)
			{
				if (func_175(&uLocal_521, 1, 1, 1, 0, 1, 0))
				{
					unk_0x3458550DF8E9B453(false, true, 1500, 0, 0, 0);
					if (unk_0x8DDE799D31A3D099(iLocal_92))
					{
						unk_0x7674774BB9279265(iLocal_92);
					}
					func_254(&uLocal_521);
					func_201(7);
				}
			}
			break;
	}
}

void func_254(var uParam0)//Position - 0x25FE1
{
	func_176(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_255()//Position - 0x25FFC
{
	int iVar0;
	bool bVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	func_264();
	if (((unk_0x6ADD12BF4D6D2587(iLocal_92) && !unk_0xB8DE76287EDC4957(iLocal_92, 0)) || (unk_0x6ADD12BF4D6D2587(iLocal_99[0]) && !unk_0xB8DE76287EDC4957(iLocal_99[0], 0))) || (unk_0x6ADD12BF4D6D2587(iLocal_99[1]) && !unk_0xB8DE76287EDC4957(iLocal_99[1], 0)))
	{
		func_103("FM2_TSPOOK");
	}
	if (!unk_0x6ADD12BF4D6D2587(iLocal_106))
	{
		func_263();
	}
	iVar0 = 0;
	while (iVar0 < iLocal_99)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_99[iVar0]))
		{
			func_248(iVar0, 1);
		}
		iVar0++;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_91[iVar0]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_91[iVar0]) || unk_0x191BE1BC8F26F3C1(iLocal_91[iVar0], 0))
			{
				func_103("FM2_TSPOOK");
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (((((((((((((((((unk_0x5679106BC7ED79EE(-2033,821f, -1031,864f, 4,89f, 5f, 1) || unk_0x4E69510C44147A5C(4, -2033,821f, -1031,864f, 4,89f, 10f)) || unk_0x4E69510C44147A5C(0, -2033,821f, -1031,864f, 4,89f, 10f)) || unk_0x4E69510C44147A5C(1, -2033,821f, -1031,864f, 4,89f, 10f)) || unk_0x4E69510C44147A5C(20, -2033,821f, -1031,864f, 4,89f, 10f)) || unk_0x4E69510C44147A5C(19, -2033,821f, -1031,864f, 4,89f, 10f)) || unk_0x4E69510C44147A5C(3, -2033,821f, -1031,864f, 4,89f, 10f)) || unk_0x4E69510C44147A5C(15, -2033,821f, -1031,864f, 4,89f, 10f)) || unk_0x4E69510C44147A5C(2, -2033,821f, -1031,864f, 4,89f, 10f)) || unk_0x692364B06AD5AF40(-2033,821f, -1031,864f, 4,89f, joaat("weapon_smokegrenade"), 5f, 1)) || unk_0x692364B06AD5AF40(-2033,821f, -1031,864f, 4,89f, joaat("weapon_rpg"), 5f, 1)) || unk_0x692364B06AD5AF40(-2033,821f, -1031,864f, 4,89f, joaat("weapon_grenade"), 5f, 1)) || unk_0x692364B06AD5AF40(-2033,821f, -1031,864f, 4,89f, joaat("weapon_grenadelauncher"), 5f, 1)) || unk_0x692364B06AD5AF40(-2033,821f, -1031,864f, 4,89f, joaat("weapon_grenadelauncher_smoke"), 5f, 1)) || unk_0x692364B06AD5AF40(-2033,821f, -1031,864f, 4,89f, joaat("weapon_smokegrenade"), 5f, 1)) || unk_0x692364B06AD5AF40(-2033,821f, -1031,864f, 4,89f, joaat("weapon_bzgas"), 5f, 1)) || unk_0x692364B06AD5AF40(-2033,821f, -1031,864f, 4,89f, joaat("weapon_molotov"), 5f, 1)) || (unk_0x5574AE3F3C1123AD(unk_0xFC1458A37D98B502(), Vector(4,89f, -1031,864f, -2033,821f) - Vector(30f, 30f, 30f), Vector(4,89f, -1031,864f, -2033,821f) + Vector(30f, 30f, 30f), 0, 1) && !unk_0x9C8F5918B4DF54D8(unk_0xFC1458A37D98B502())))
		{
			func_103("FM2_TSPOOK");
		}
	}
	if (!unk_0xA6DECE14FC9A8C51(iLocal_102))
	{
		iLocal_102 = func_209(-2034,37f, -1032,23f, 4,88f, 0);
		unk_0x0C71C8E276E3EC54(iLocal_102, 3);
		unk_0xA5D25D3F884FF516(iLocal_102, 1f);
		unk_0x62BD54E491535B76(iLocal_102, "FM2_YACHTL");
	}
	switch (iLocal_159)
	{
		case 0:
			if (!func_237("FM2_DIVOFF"))
			{
				func_238("FM2_DIVOFF", -1);
			}
			unk_0x1267474D9A69CA37(0f, 10f, 4);
			func_157(&Local_549, cLocal_202, "FAM2_STOP", 8, 0, 0, 0);
			func_262(207, 0);
			func_198(6);
			system::settimera(0);
			if (unk_0x4C4813CAAD70E814(0))
			{
				sLocal_610[2] = "FM2_USWIM1_KM";
				sLocal_610[0] = "FM2_SWIM_KM";
			}
			else if (unk_0x8E8C94609BA4BEA9(0) == 4)
			{
				sLocal_610[2] = "FM2_SWIM_FP";
				sLocal_610[0] = "FM2_SWIM_FP";
			}
			else
			{
				sLocal_610[2] = "FM2_USWIM1";
				sLocal_610[0] = "FM2_SWIM";
			}
			sLocal_610[3] = "FM2_USWIM2";
			sLocal_610[1] = "FM2_DIVE";
			sLocal_610[4] = "FM2_STAT1";
			sLocal_610[5] = "FM2_DROWN";
			iLocal_614[0] = "shouting_jimmy_idle_a";
			iLocal_614[1] = "shouting_jimmy_idle_b";
			iLocal_614[2] = "shouting_jimmy_idle_c";
			iLocal_615 = 0;
			iLocal_159++;
			iLocal_168 = -1;
			iLocal_618 = -1;
			iLocal_611 = -1;
			iLocal_616 = 0;
			bLocal_620 = false;
			iLocal_619 = 0;
			iLocal_178 = 0;
			unk_0x6450931B826B49D9("missfam2ig_3");
			unk_0x94BD6F0436473406(0,1f);
			if (iLocal_155)
			{
				iLocal_159 = -1;
			}
			iLocal_617 = 1;
			break;
		
		case -1:
			unk_0xBC469A15B0FBB2B3("smboat");
			while (!unk_0xAB84FBE3AB3FFAD3("smBoat"))
			{
				system::wait(0);
			}
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -1115154469, 0, 0, 0);
				unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 3f, iLocal_171, 0, 1, 0);
			}
			iLocal_159 = 1;
			iLocal_155 = 0;
			break;
		
		case 1:
			if (unk_0x3E9CABD07B829173() && !unk_0x9BB64DDCD9C7B076())
			{
				unk_0x59C3AC31C7544A28(500);
			}
			if (iLocal_617)
			{
				unk_0x691491EBC2D892F5(unk_0xFC1458A37D98B502(), 3f);
				if (system::timera() < 1000 || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1871,083f, -1203,116f, 13,01658f, 2,5f, 2,5f, 3f, 0, 1, 0))
				{
					iLocal_617 = 0;
				}
			}
			if (iLocal_618 == -1 && (!func_171() || unk_0x496616BFA56C89EB(203) == 0))
			{
				func_150("FM2_YACHT", 7500, 1);
				iLocal_618 = unk_0x53C562FD2B9E3AB0();
			}
			fVar2 = system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_89, 1));
			if (unk_0x3A801AA34DD821BE("missfam2ig_3"))
			{
				if (system::vdist(unk_0xB3328BA8976B416C(iLocal_89, 1), -1859,264f, -1216,776f, 13,0174f) > 3f)
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_89, 713668775) != 1)
					{
						unk_0xB8E08BD5B184DF4E(iLocal_89);
						iLocal_611 = 0;
						unk_0x380C1E7B7740D618(iLocal_89, -1859,264f, -1216,776f, 13,0174f, 1f, -1, 0,25f, 0, 1193033728);
					}
				}
				else if (fVar2 < 900f)
				{
					if (!unk_0xCA3C40448996C9BA(iLocal_89, unk_0xFC1458A37D98B502(), 10f))
					{
						if (unk_0x78F50AA8F955BEFC(iLocal_89, -875674219) != 1 && unk_0xA5F6598E13F98E08(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 3))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_89);
							unk_0xAC838A977FB6E6BC(iLocal_89, unk_0xFC1458A37D98B502(), 0);
							unk_0x60C06BFD037BB7CF(iLocal_89, unk_0xFC1458A37D98B502(), -1, 0, 2);
							iLocal_611 = 0;
						}
					}
					else
					{
						switch (iLocal_611)
						{
							case -1:
								unk_0x6450931B826B49D9("missfam2ig_3");
								if (unk_0x3A801AA34DD821BE("missfam2ig_3"))
								{
									iLocal_611 = 0;
								}
								break;
							
							case 0:
								if ((unk_0x53C562FD2B9E3AB0() - iLocal_613) > 1000)
								{
									if (!unk_0xA5F6598E13F98E08(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 3))
									{
										unk_0x12C9D41D52A560D6(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 4f, -4f, -1, 49, 0, 0, 0, 0);
									}
									else
									{
										iLocal_611++;
									}
									iLocal_613 = unk_0x53C562FD2B9E3AB0();
								}
								break;
							
							case 1:
								if ((((unk_0x53C562FD2B9E3AB0() - iLocal_618) > 5000 || unk_0x496616BFA56C89EB(203) == 0) && fVar2 < 900f) && (iLocal_168 == -1 || (unk_0x53C562FD2B9E3AB0() - iLocal_168) > 10000))
								{
									unk_0xB8E08BD5B184DF4E(iLocal_89);
									if (func_157(&Local_549, cLocal_202, "FAM2_STOP", 8, 0, 0, 0))
									{
										unk_0x12C9D41D52A560D6(iLocal_89, "missfam2ig_3", iLocal_614[iLocal_612], 4f, -4f, -1, 48, 0, 0, 0, 0);
										iLocal_168 = unk_0x53C562FD2B9E3AB0();
										iLocal_611++;
									}
								}
								break;
							
							case 2:
								if ((unk_0x53C562FD2B9E3AB0() - iLocal_168) > 1000)
								{
									if (!unk_0xA5F6598E13F98E08(iLocal_89, "missfam2ig_3", iLocal_614[iLocal_612], 3))
									{
										unk_0xB8E08BD5B184DF4E(iLocal_89);
										iLocal_612++;
										if (iLocal_612 >= iLocal_614)
										{
											iLocal_612 = 0;
										}
										iLocal_611 = 0;
									}
								}
								break;
							}
						}
					}
			}
			if (!unk_0x771D0F8F56A5FE6C("FAMILY_2_DIVE_INTO_WATER"))
			{
				if (unk_0x6BB6F0A3BA3FA54B(unk_0xFC1458A37D98B502()))
				{
					unk_0xE859EF37EA7362D3("FAMILY_2_DIVE_INTO_WATER");
				}
			}
			if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()) || system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_209) < 100f)
			{
				vVar3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				if (vVar3.z < 2f)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_89))
					{
						unk_0x486F346ADFE56674(&iLocal_89);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_93))
					{
						unk_0x5380482A432E314E(&iLocal_93);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_94))
					{
						unk_0x5380482A432E314E(&iLocal_94);
					}
				}
				if (unk_0x771D0F8F56A5FE6C("FAMILY_2_DIVE_INTO_WATER"))
				{
					unk_0xE02E32C69260FBB7("FAMILY_2_DIVE_INTO_WATER");
				}
				iLocal_159++;
				system::settimera(0);
				if (func_237("FM2_DIVOFF"))
				{
					unk_0x3E80C2F7BC665259(0);
				}
				unk_0xFCCDDE0E48CF9588("missfam2ig_3");
				unk_0x8810DC630928B398("FAM2_SPLASH");
			}
			break;
		
		case 2:
			if (!func_237("FM2_DIVOFF") && system::timera() > 3000)
			{
				unk_0x1B5A255BF0D63005("DisableReplayScriptStreamRecording", 1);
				unk_0x1267474D9A69CA37(3f, 10f, 4);
				iLocal_159++;
			}
			break;
		
		case 3:
			if (!iLocal_616)
			{
				if (unk_0x8028488F650E6677("FAM2_BOAT_PARTY_MASTER", 0))
				{
					unk_0xC639789960BE10C6(-2032,599f, -1032,639f, 4,8831f);
					iLocal_616 = 1;
				}
			}
			func_257();
			if (unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
				{
					if (!bLocal_620)
					{
						bLocal_620 = true;
					}
				}
				else if (bLocal_620)
				{
					if (!unk_0x771D0F8F56A5FE6C("FAMILY_2_SWIM_TO_YACHT"))
					{
						unk_0xE859EF37EA7362D3("FAMILY_2_SWIM_TO_YACHT");
					}
				}
			}
			if (((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2033,124f, -1042,981f, 0f, -2028,863f, -1028,328f, 8,97435f, 18,25f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2017,999f, -1035,053f, 5,946373f, -2023,154f, -1033,719f, 1,287564f, 3,25f, 0, 1, 0)) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
			{
				unk_0x8E7C072C41DF97BF();
				if (unk_0x771D0F8F56A5FE6C("FAMILY_2_SWIM_TO_YACHT"))
				{
					unk_0xE02E32C69260FBB7("FAMILY_2_SWIM_TO_YACHT");
				}
				unk_0x1267474D9A69CA37(5f, 4f, 3);
				func_201(6);
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2030,86f, -1035,417f, 7,882243f, -2006,247f, -1043,832f, -1,481001f, 21,25f, 0, 1, 0))
			{
				unk_0x8810DC630928B398("FAM2_NEAR_YACHT");
				iLocal_615 = 1;
				iLocal_159++;
			}
			if (!iLocal_615)
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -2017,155f, -1040,214f, 1,4499f) < 400f && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0x8810DC630928B398("FAM2_NEAR_YACHT");
					iLocal_615 = 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
			{
				if (func_202(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1093140480, 1, 1056964608, 0, 1, 0))
				{
					unk_0x1B5A255BF0D63005("DisableReplayScriptStreamRecording", 0);
					unk_0x8E7C072C41DF97BF();
					if (unk_0x771D0F8F56A5FE6C("FAMILY_2_SWIM_TO_YACHT"))
					{
						unk_0xE02E32C69260FBB7("FAMILY_2_SWIM_TO_YACHT");
					}
					unk_0x1267474D9A69CA37(0f, 8f, 3);
					func_201(6);
				}
			}
			break;
	}
	if (func_256(&uLocal_606, &iLocal_604, &uLocal_605))
	{
		func_103("FM2_JSPOOK");
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_89) && system::vdist(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 30f)
		{
			func_103("FM2_JSPOOK");
		}
		else
		{
			func_146();
		}
	}
	if (!iLocal_619)
	{
		if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
		{
			unk_0x4BEFCD5DAE410A90(iLocal_92, 3);
			iLocal_619 = 1;
		}
	}
	if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
	{
		unk_0x4FB260623DD93924(0, 23, 1);
	}
	if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_209) > 250000f)
	{
		func_103("FM2_TRAAB");
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
	{
		vVar4 = { unk_0xB3328BA8976B416C(iLocal_89, 1) };
		fVar5 = vVar4.z;
		if (fVar5 < 10f)
		{
			func_103("FM2_JIMHIT");
		}
	}
}

int func_256(var uParam0, int iParam1, var uParam2)//Position - 0x26C10
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_89))
	{
		if (!*uParam0)
		{
			if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()) || unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iLocal_89, 1), 10f, 1))
			{
				*uParam0 = 1;
			}
		}
		else if ((unk_0x53C562FD2B9E3AB0() - *uParam2) > 200)
		{
			*iParam1++;
			*uParam2 = unk_0x53C562FD2B9E3AB0();
			*uParam0 = 0;
		}
		if ((*iParam1 > 0 && !*uParam0) && (unk_0x53C562FD2B9E3AB0() - *uParam2) > 1000)
		{
			*iParam1 = (*iParam1 - 1);
		}
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1);
		if (!func_171() && (unk_0x53C562FD2B9E3AB0() - iLocal_169) > 7500)
		{
			func_196(iLocal_89, "GENERIC_SHOCKED_MED", "Jimmy", 3);
			iLocal_169 = unk_0x53C562FD2B9E3AB0();
		}
		if ((((((((*iParam1 > 5 || unk_0xAB0762B9CCAA2B6F(unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenade"), 0)) || unk_0xAB0762B9CCAA2B6F(unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenadelauncher"), 0)) || unk_0xAB0762B9CCAA2B6F(unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenadelauncher_smoke"), 0)) || unk_0xAB0762B9CCAA2B6F(unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_rpg"), 0)) || unk_0xAB0762B9CCAA2B6F(unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_molotov"), 0)) || unk_0xAB0762B9CCAA2B6F(unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_bzgas"), 0)) || unk_0x98129652BB227B1B(2, unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(2f, 10f, 10f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(2f, 10f, 10f))) || (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4) && unk_0x613CDAB05D8C57C8(iLocal_94, iVar0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_257()//Position - 0x26E75
{
	iLocal_622 = iLocal_621;
	if (unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_627, 5) && unk_0x666CEF57ACC2B6D8(unk_0x9EB17624F44A8DA4()) <= 5f)
			{
				if (iLocal_621 != 5)
				{
					iLocal_621 = 5;
				}
			}
			else if (!unk_0xF491DD47B88AA84E())
			{
				if (!unk_0xC80D31E4B587871C(iLocal_627, 2))
				{
					if (iLocal_621 != 2)
					{
						iLocal_621 = 2;
					}
				}
				else if (!unk_0xC80D31E4B587871C(iLocal_627, 3))
				{
					if (iLocal_621 != 3)
					{
						iLocal_621 = 3;
					}
				}
				else if (!unk_0xC80D31E4B587871C(iLocal_627, 4))
				{
					if (iLocal_621 != 4)
					{
						iLocal_621 = 4;
					}
				}
			}
		}
		else if (!unk_0xF491DD47B88AA84E())
		{
			if (!unk_0xC80D31E4B587871C(iLocal_627, 0))
			{
				if (iLocal_621 != 0)
				{
					iLocal_621 = 0;
				}
			}
			else if (!unk_0xC80D31E4B587871C(iLocal_627, 1))
			{
				if (iLocal_621 != 1)
				{
					iLocal_621 = 1;
				}
			}
			else if (!unk_0xC80D31E4B587871C(iLocal_627, 4))
			{
				if (iLocal_621 != 4)
				{
					iLocal_621 = 4;
				}
			}
		}
	}
	if (iLocal_621 != iLocal_622)
	{
		iLocal_624 = 0;
		iLocal_623 = 0;
		iLocal_625 = 0;
		fLocal_626 = 0f;
	}
	if (!iLocal_623)
	{
		if ((iLocal_621 != 1 && iLocal_621 != 2) && iLocal_621 != 3)
		{
			if (func_260(sLocal_610[iLocal_621], 0))
			{
				iLocal_623 = 1;
			}
		}
		else if (unk_0x8E8C94609BA4BEA9(0) != 4)
		{
			if (func_260(sLocal_610[iLocal_621], 0))
			{
				iLocal_623 = 1;
			}
		}
		else
		{
			iLocal_623 = 1;
		}
	}
	else if (func_237(sLocal_610[iLocal_621]))
	{
		fLocal_626 = (fLocal_626 + unk_0x46C19C2753391FBF());
		if (fLocal_626 > 2f || !func_259(iLocal_621))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_627, iLocal_621))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_627, iLocal_621);
			}
			if (!iLocal_624 && func_259(iLocal_621))
			{
				if (func_258(iLocal_621))
				{
					iLocal_624 = 1;
				}
			}
			else if (!iLocal_625)
			{
				unk_0x3E80C2F7BC665259(0);
				iLocal_625 = 1;
			}
		}
	}
}

int func_258(int iParam0)//Position - 0x27061
{
	switch (iParam0)
	{
		case 2:
		case 0:
			if (unk_0xE8C126B7ADBB9D63(0, 21) && unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 4f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xE8C126B7ADBB9D63(0, 30) || unk_0xE8C126B7ADBB9D63(0, 31))
			{
				return 1;
			}
			break;
		
		case 5:
			if (!unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_259(int iParam0)//Position - 0x270F2
{
	if (unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
		{
			if (((iParam0 == 5 || iParam0 == 3) || iParam0 == 2) || iParam0 == 4)
			{
				return 1;
			}
		}
		else if ((iParam0 == 1 || iParam0 == 0) || iParam0 == 4)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_260(char* sParam0, bool bParam1)//Position - 0x27163
{
	if (unk_0xF491DD47B88AA84E() && !func_237(sParam0))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	else if (bParam1)
	{
		func_261(sParam0);
	}
	else
	{
		func_238(sParam0, -1);
	}
	if (func_237(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_261(char* sParam0)//Position - 0x271A9
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, 1, -1);
}

void func_262(int iParam0, bool bParam1)//Position - 0x271BF
{
	int iVar0;
	
	Global_55913 = iParam0;
	if (!Global_55911)
	{
		Global_55911 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_67999[iVar0 /*9*/] == iParam0)
			{
				Global_67999[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

bool func_263()//Position - 0x27209
{
	if (!unk_0x6ADD12BF4D6D2587(iLocal_106))
	{
		unk_0x6FF834D85E2DD4C6(joaat("prop_mp3_dock"));
		if (unk_0x9A0B2ED5055D3F0B(joaat("prop_mp3_dock")))
		{
			iLocal_106 = unk_0x5E35CF35E65D69B9(joaat("prop_mp3_dock"), -2032,539f, -1032,35f, 5,421927f, 1, true, 0);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_106))
	{
		unk_0xBD8D47FDC6902B2D(iLocal_106, -2032,539f, -1032,35f, 5,421927f, 1, false, 0, 1);
		unk_0x59AF3B40AE222194(iLocal_106, 0f, 0f, 66,5523f, 2, 1);
	}
	return unk_0x6ADD12BF4D6D2587(iLocal_106);
}

void func_264()//Position - 0x27284
{
	vector3 vVar0;
	
	switch (iLocal_628)
	{
		case 0:
			unk_0x6FF834D85E2DD4C6(-1589092019);
			iLocal_628++;
			break;
		
		case 1:
			if (unk_0x9A0B2ED5055D3F0B(-1589092019))
			{
				iLocal_628++;
			}
			break;
		
		case 2:
			vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (vVar0.z < 1f)
			{
				iLocal_629 = unk_0xAC992EFAD62C33BF(26, -1589092019, -1885,497f, -1189,883f, -8,2945f, -136,1128f, 1, true);
				unk_0x6EF694689373EE8D(iLocal_629, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 1f, 20000, 1193033728, 1056964608);
				iLocal_628++;
			}
			break;
		
		case 3:
			if (func_265(iLocal_629, unk_0xFC1458A37D98B502(), 1) > 20f || unk_0x78F50AA8F955BEFC(iLocal_629, 2106541073) == 7)
			{
				unk_0x14776E43F90DD454(-1589092019);
				unk_0x486F346ADFE56674(&iLocal_629);
				iLocal_628++;
			}
			break;
	}
}

float func_265(int iParam0, int iParam1, bool bParam2)//Position - 0x2737E
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	}
	return unk_0xBE3C4023003180FC(vVar0, vVar1, bParam2);
}

void func_266()//Position - 0x273DC
{
	switch (iLocal_159)
	{
		case 0:
			if (!unk_0x6C97EEC6339FB45C())
			{
				unk_0x79E39A06DE88EFE2("family_2_mcs_2", 6, 8);
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			break;
		
		case 1:
			if (unk_0x8AD07B6FC24F47C4())
			{
				func_2("Michael", unk_0xFC1458A37D98B502(), 0, 2);
				iLocal_159++;
			}
			break;
		
		case 2:
			func_154();
			if (func_193())
			{
				if (func_267("family_2_mcs_2"))
				{
					unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
					unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
					func_185(1, 1, 1, 0);
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
					{
						unk_0x848742400D0AD6DA(iLocal_89, 100f);
						unk_0x4982ECE0928DA13D(iLocal_89, "Jimmy", 0, 0, 0);
					}
					if (unk_0xB8DE76287EDC4957(iLocal_93, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_93))
						{
							unk_0x7674774BB9279265(iLocal_93);
						}
					}
					if (unk_0xB8DE76287EDC4957(iLocal_94, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_94))
						{
							unk_0xEDC33A771FAEB393(iLocal_94, false);
							unk_0x7674774BB9279265(iLocal_94);
						}
						unk_0x4982ECE0928DA13D(iLocal_94, "FAM_2_Jimmys_bike", 0, 0, 0);
					}
					unk_0x0662098C9EF126B4(4);
					unk_0xD0BFA95B279C174F(0);
					unk_0x84CDD933AFA470D2();
					unk_0x3E80C2F7BC665259(1);
					func_184();
					unk_0x797EAF57A872C68A(unk_0xFC1458A37D98B502(), 3, 26, 0);
					unk_0x797EAF57A872C68A(unk_0xFC1458A37D98B502(), 4, 27, 0);
					if (unk_0x771D0F8F56A5FE6C("FAMILY_2_BIKE_RACE_JIMMY"))
					{
						unk_0xE02E32C69260FBB7("FAMILY_2_BIKE_RACE_JIMMY");
					}
					unk_0xE7759EF4FF50C51F(0f, 0f);
					iLocal_159++;
				}
				else
				{
					unk_0xA6C03E3E2533F8F3();
					unk_0x79E39A06DE88EFE2("family_2_mcs_2", 5, 8);
				}
			}
			break;
		
		case 3:
			if (unk_0xB8DE76287EDC4957(iLocal_93, 0))
			{
				if (bLocal_180)
				{
					unk_0xBD8D47FDC6902B2D(iLocal_93, -1848,195f, -1218,706f, 12,58357f, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_93, 129,3527f);
				}
				else
				{
					unk_0xBD8D47FDC6902B2D(iLocal_93, -1867,383f, -1212,198f, 12,57401f, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_93, -0,030485f);
				}
				unk_0xACE486395AA1867D(iLocal_93, 1084227584);
				unk_0x764B52EA8B8FFFA3(iLocal_93);
			}
			unk_0x247EAA2E93D4A021(-1859,045f, -1215,503f, 12,0665f, 2f, 1, 0, 0, false);
			if (!unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
			{
				unk_0x59C3AC31C7544A28(500);
			}
			unk_0x6EC874A9FE87276C(unk_0xFC1458A37D98B502(), 1);
			iLocal_159++;
			break;
		
		case 4:
			if (unk_0x6C97EEC6339FB45C() && unk_0xA8113D347D14630F())
			{
				unk_0x79B05894D06FFAF8(1,5f);
				if (unk_0xE57A999388F7FD02() > 90500)
				{
					unk_0x4FB260623DD93924(2, 18, 1);
				}
			}
			if (unk_0xBBC745B9F75E27D0("Michael", 0))
			{
				unk_0x61635C0A7950C875();
				func_370(1, 0);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -1115154469, 0, 1, 0);
				unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 3f, iLocal_171, 0, 1, 0);
				func_238("FM2_DIVOFF", -1);
			}
			if (!unk_0x6C97EEC6339FB45C())
			{
				unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
				if (unk_0xB8DE76287EDC4957(iLocal_94, 0))
				{
					unk_0xAA93B7B448E10E40(iLocal_94, -1858,612f, -1214,563f, 12,307f, 0, 0, 1);
					unk_0x47F55B6102CA9143(iLocal_94, 0,388f, -0,438f, 0,4777f, 0,6553f);
					unk_0xB8D9F55BA414128D(iLocal_94, 0, 0f, 0f, -0,01f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				}
				unk_0x3C442931F035583A(unk_0xFC1458A37D98B502());
				func_185(0, 1, 1, 0);
				func_182();
				func_201(5);
			}
			break;
	}
}

bool func_267(char* sParam0)//Position - 0x27701
{
	bool bVar0;
	
	bVar0 = unk_0x0C78C25CF5CD8944(sParam0);
	if (!Global_70855)
	{
		if (!bVar0)
		{
			Global_70855 = 1;
		}
	}
	return bVar0;
}

void func_268()//Position - 0x27726
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
	unk_0x72CB9F3FA10C599B(0,7f);
	if ((!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
	{
		if (((((unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("cruiser")) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("scorcher"))) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("tribike"))) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("tribike2"))) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("tribike3"))) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("bmx")))
		{
			unk_0x5380482A432E314E(&iLocal_93);
			iLocal_93 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			iVar0 = 0;
			while (iVar0 < iLocal_96)
			{
				if (iLocal_96[iVar0] == unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_96[iVar0] = 0;
				}
				iVar0++;
			}
			unk_0xDD29FF4BAB8AFF9C(iLocal_93, true, 0);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_95) && unk_0xB8DE76287EDC4957(iLocal_95, 0))
	{
		if ((system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_95, 1)) > 1000f && unk_0xEC211A86AB3726B6(iLocal_95)) && !unk_0x9E06F0EE20F58CED(vLocal_131, 5f))
		{
			if (system::vdist2(vLocal_131, unk_0xB3328BA8976B416C(iLocal_95, 1)) < 625f)
			{
				func_435(iLocal_95, vLocal_131 + Vector(1f, 0f, 0f), fLocal_132, 24, 0);
				func_434(24);
			}
			unk_0xC91FE17AD7353B70(&iLocal_95);
		}
	}
	if ((!unk_0x3AB6A1A9084FB0A4(iLocal_89) && unk_0xB8DE76287EDC4957(iLocal_94, 0)) && unk_0xB8DE76287EDC4957(iLocal_93, 0))
	{
		if ((((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1308,715f, -1310,135f, -22,62013f, -1171,372f, -1261,148f, 47,98976f, 250f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1348,925f, -1155,041f, -20,53191f, -1163,36f, -1143,443f, 34,68446f, 142,25f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1386,385f, -1054,306f, -16,12128f, -1245,289f, -965,9915f, 32,39125f, 142,25f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1462,164f, -972,0999f, -20,40302f, -1332,72f, -833,9435f, 45,98875f, 227,25f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1178,163f, -1629,206f, 1,873874f, -1315,888f, -1365,294f, 25,02553f, 173,75f, 0, 1, 0))
		{
			unk_0xFB4AD069EFD0869A(1);
		}
		else
		{
			unk_0xFB4AD069EFD0869A(0);
		}
		if ((unk_0x6ADD12BF4D6D2587(iLocal_93) && unk_0xB8DE76287EDC4957(iLocal_93, 0)) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
		{
			if (!unk_0x771D0F8F56A5FE6C("FAMILY_2_BIKE_RACE_JIMMY"))
			{
				unk_0xE859EF37EA7362D3("FAMILY_2_BIKE_RACE_JIMMY");
			}
		}
		switch (iLocal_159)
		{
			case 0:
				fLocal_600 = 0f;
				unk_0xB4AF8E4D052DCD63(iLocal_89, 1);
				if (unk_0x8DDE799D31A3D099(iLocal_94))
				{
					unk_0x7674774BB9279265(iLocal_94);
				}
				iLocal_104 = func_210(iLocal_94, 0, 0);
				unk_0x62BD54E491535B76(iLocal_104, "BLIP_280");
				unk_0x60C06BFD037BB7CF(iLocal_89, unk_0xFC1458A37D98B502(), -1, 0, 2);
				iLocal_185 = 0;
				iLocal_184 = 0;
				bLocal_180 = false;
				iLocal_181 = 0;
				iLocal_601 = 0;
				iLocal_602 = (vLocal_603.x - 1);
				iLocal_604 = 0;
				bLocal_607 = false;
				vLocal_603[0 /*3*/] = { -1266,288f, -1689,561f, 3,4691f };
				vLocal_603[1 /*3*/] = { -1345,057f, -1263,89f, 3,8977f };
				vLocal_603[2 /*3*/] = { -1564,547f, -928,2069f, 12,0173f };
				vLocal_603[3 /*3*/] = { vLocal_146 };
				unk_0x8D3373CFE9542320(Vector(5,75302f, -1325,827f, -1329,113f) + Vector(2,5f, 44f, 13,25f), Vector(5,75302f, -1325,827f, -1329,113f) - Vector(2,5f, 44f, 13,25f), 0, 0);
				unk_0x14BB9709F9BFF17B(-1361,568f, -1207,053f, 3,4492f, 10f, 0);
				unk_0x14BB9709F9BFF17B(-1396,34f, -1059,049f, 3,2013f, 15f, 0);
				unk_0xCFF0CD14B439821D(iLocal_89, 1, 1);
				unk_0xFBA991D3A851E195(iLocal_89, 1);
				unk_0xCFF0CD14B439821D(iLocal_94, 1, 1);
				unk_0xFBA991D3A851E195(iLocal_94, 1);
				func_231(&uLocal_213, iLocal_158, sLocal_156);
				iLocal_159++;
				unk_0xE7759EF4FF50C51F(0,5f, 0,5f);
				func_276(500);
				unk_0x1D29C781A978C4FB(1, false);
				unk_0x1D29C781A978C4FB(7, false);
				unk_0x1D29C781A978C4FB(2, false);
				unk_0x1D29C781A978C4FB(4, false);
				unk_0x1D29C781A978C4FB(10, false);
				unk_0x1D29C781A978C4FB(9, false);
				unk_0x1D29C781A978C4FB(8, false);
				unk_0xBC469A15B0FBB2B3("smboat");
				break;
			
			case 1:
				if (unk_0xA8D0477084E86A92(iLocal_89, iLocal_94, 0))
				{
					unk_0x87A3E70B0AB01608(iLocal_89, iLocal_94, -1092,392f, -1708,092f, 3,2771f, 7f, 0, joaat("cruiser"), 786471, 3f, 4f);
					iLocal_159++;
				}
				else if (unk_0x78F50AA8F955BEFC(iLocal_89, -1794415470) != 1)
				{
					unk_0x6F8C8278B7C06889(iLocal_89, iLocal_94, -1, -1, 3f, 1, 0);
				}
				break;
			
			case 2:
				if (unk_0x0C88267282FD588F(iLocal_94, -1092,392f, -1708,092f, 3,2771f, 4f, 4f, 4f, 0, 1, 0))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_89);
					unk_0x5CA96D6783EE6897(iLocal_94, iLocal_158, sLocal_156, 15f, 786549);
					iLocal_159++;
				}
				break;
			
			case 3:
				fLocal_609 = func_274(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), iLocal_158, sLocal_156, &uLocal_213);
				vLocal_608 = { unk_0xE0236CBCD003C392(iLocal_158, fLocal_609, sLocal_156) };
				fLocal_600 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_608);
				if (bLocal_607)
				{
					if (fLocal_600 < 75f)
					{
						unk_0xE30CF11C0EE14316(&iLocal_102);
						bLocal_607 = false;
					}
					if (!iLocal_203)
					{
						func_148("FM2_RIDEBK", 7500, 1);
						iLocal_204 = unk_0x53C562FD2B9E3AB0();
						iLocal_203 = 1;
					}
					if (fLocal_600 > 300f)
					{
						func_103("FM2_RACEFAIL");
					}
				}
				else
				{
					if ((unk_0x53C562FD2B9E3AB0() - iLocal_204) > 20000)
					{
						iLocal_203 = 0;
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_105))
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_104))
						{
							unk_0xE30CF11C0EE14316(&iLocal_104);
						}
						if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_93, 1)) > 22500f)
						{
							func_103("FM2_BIKLOST");
						}
					}
					else if (!bLocal_180)
					{
						if (!unk_0xA6DECE14FC9A8C51(iLocal_104))
						{
							iLocal_104 = func_210(iLocal_94, 0, 0);
							unk_0x62BD54E491535B76(iLocal_104, "BLIP_280");
						}
					}
					if (fLocal_600 > 150f)
					{
						unk_0xE30CF11C0EE14316(&iLocal_102);
						unk_0xE30CF11C0EE14316(&iLocal_104);
						unk_0x981B8A90686AD23E();
						iLocal_602 = (vLocal_603.x - 1);
						bLocal_607 = true;
					}
				}
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_89, 15f, 15f, 10f, 0, 1, 0) && !func_171())
				{
					if (unk_0x53C562FD2B9E3AB0() - iLocal_601) > unk_0x63A6486593EC7EC3(1200, 1400)
					{
						func_196(iLocal_89, "BREATHING", "JIMMY_NORMAL", 24);
						iLocal_601 = unk_0x53C562FD2B9E3AB0();
					}
				}
				if ((((((unk_0x98129652BB227B1B(2, unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(3f, 3f, 3f)) || unk_0x98129652BB227B1B(0, unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x98129652BB227B1B(1, unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x98129652BB227B1B(4, unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x98129652BB227B1B(7, unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x98129652BB227B1B(10, unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x98129652BB227B1B(25, unk_0xB3328BA8976B416C(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xB3328BA8976B416C(iLocal_89, 1) - Vector(3f, 3f, 3f)))
				{
					unk_0xB4AF8E4D052DCD63(iLocal_89, 2);
				}
				if (bLocal_180)
				{
					if (!iLocal_178)
					{
						unk_0x79E39A06DE88EFE2("family_2_mcs_2", 5, 8);
						iLocal_179 = 0;
						iLocal_178 = 1;
					}
					if (iLocal_178 && !iLocal_179)
					{
						if (unk_0x8AD07B6FC24F47C4())
						{
							func_2("Michael", unk_0xFC1458A37D98B502(), 0, 2);
							iLocal_179 = 1;
						}
					}
					if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1811,906f, -1195,154f, 11,7672f, -1846,906f, -1237,279f, 19,5172f, 21,25f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1816,365f, -1234,039f, 7,017199f, -1859,197f, -1241,141f, 22,87097f, 57,75f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1856,623f, -1201,832f, 7,017204f, -1859,197f, -1241,141f, 22,87097f, 57,75f, 0, 1, 0))
					{
						if (iLocal_179)
						{
							unk_0xE30CF11C0EE14316(&iLocal_102);
							unk_0xE30CF11C0EE14316(&iLocal_104);
							unk_0x1267474D9A69CA37(12f, 5f, 4);
							func_201(4);
						}
					}
				}
				else
				{
					func_273();
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_124) < 10000f)
					{
						if (!iLocal_178)
						{
							unk_0x79E39A06DE88EFE2("family_2_mcs_2", 6, 8);
							iLocal_178 = 1;
						}
						else if (!iLocal_179 && unk_0x8AD07B6FC24F47C4())
						{
							func_2("Michael", unk_0xFC1458A37D98B502(), 0, 2);
							iLocal_179 = 1;
						}
					}
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
					{
						if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_146, Global_19, 1, 1, 0))
						{
							unk_0xE30CF11C0EE14316(&iLocal_102);
							unk_0xE30CF11C0EE14316(&iLocal_104);
							iLocal_159++;
						}
					}
				}
				break;
			
			case 4:
				if (func_202(iLocal_93, 30f, 1, 1056964608, 0, 1, 0))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 256);
					unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), -1823,195f, -1213,526f, 12,152f, -1, 0, 3);
					unk_0x4F8A35D7CBC17327(unk_0xFC1458A37D98B502(), iLocal_93, 0);
					iLocal_159++;
				}
				break;
			
			case 5:
				if (unk_0xB8DE76287EDC4957(iLocal_93, 0) && !unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_93))
				{
					system::settimera(0);
					iLocal_159++;
				}
				break;
			
			case 6:
				if (system::timera() > 800)
				{
					unk_0x1267474D9A69CA37(12f, 5f, 4);
					func_201(4);
				}
				break;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_89) && unk_0xB8DE76287EDC4957(iLocal_94, 0))
		{
			if (func_256(&uLocal_606, &iLocal_604, &uLocal_605))
			{
				func_103("FM2_JSPOOK");
			}
			if (!iLocal_181)
			{
				if (iLocal_159 < 4)
				{
					fLocal_598 = func_274(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), iLocal_158, sLocal_156, &uLocal_213);
					fLocal_599 = func_274(unk_0xB3328BA8976B416C(iLocal_89, 1), iLocal_158, sLocal_156, &uLocal_213);
					fVar1 = (fLocal_599 - fLocal_598);
					func_272(fVar1, fLocal_600, fLocal_598 > fLocal_599);
					if (unk_0x0C88267282FD588F(iLocal_89, vLocal_146, Global_19, 0, 1, 0))
					{
						unk_0xB18E1DBC397238E1(iLocal_94, true, 0);
						unk_0xFBA991D3A851E195(iLocal_89, 1);
						unk_0xFBA991D3A851E195(iLocal_94, 1);
						if (!bLocal_180)
						{
							unk_0xA6C03E3E2533F8F3();
							iLocal_178 = 0;
							bLocal_180 = true;
						}
						iLocal_181 = 1;
					}
				}
				else if ((!bLocal_180 && unk_0x0F3033474C49912D(iLocal_89, -1806,987f, -1191,762f, -42,98238f, -1854,44f, -1247,811f, 30,4819f, 90f, 0, 1, 0)) && system::vdist2(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 36f)
				{
					unk_0xE30CF11C0EE14316(&iLocal_102);
					unk_0xE30CF11C0EE14316(&iLocal_104);
					func_201(4);
				}
			}
			if (iLocal_181 || (iLocal_159 >= 4 && !unk_0x8DDE799D31A3D099(iLocal_94)))
			{
				if (unk_0xA8D0477084E86A92(iLocal_89, iLocal_94, 0))
				{
					if (!unk_0xEC211A86AB3726B6(iLocal_89) && system::vdist2(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 2500f)
					{
						if (unk_0x8DDE799D31A3D099(iLocal_94))
						{
							unk_0x7674774BB9279265(iLocal_94);
						}
					}
					else
					{
						unk_0x7674774BB9279265(iLocal_94);
						unk_0xEDC33A771FAEB393(iLocal_94, true);
					}
				}
			}
		}
		if (iLocal_159 < 4 && iLocal_159 > 0)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_93, 0) && unk_0x6ADD12BF4D6D2587(iLocal_93))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
				{
					if (!unk_0xA6DECE14FC9A8C51(iLocal_105))
					{
						unk_0x84CDD933AFA470D2();
						if (iLocal_547)
						{
							func_147(&Local_544);
						}
						iLocal_105 = func_210(iLocal_93, 0, 0);
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_102))
					{
						unk_0xE30CF11C0EE14316(&iLocal_102);
						iLocal_602 = (vLocal_603.x - 1);
						unk_0x981B8A90686AD23E();
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_104))
					{
						unk_0xE30CF11C0EE14316(&iLocal_104);
					}
				}
				else
				{
					iLocal_547 = 1;
					if (bLocal_607)
					{
						if (!unk_0xA6DECE14FC9A8C51(iLocal_102))
						{
							fVar2 = func_235((fLocal_609 + 10000f), 20000f, unk_0x3413A86ABE2F138E(iLocal_158, sLocal_156));
							iLocal_102 = func_209(unk_0xE0236CBCD003C392(iLocal_158, fVar2, sLocal_156), 1);
						}
					}
					else
					{
						if (!unk_0xA6DECE14FC9A8C51(iLocal_102))
						{
							unk_0x84CDD933AFA470D2();
							iLocal_102 = func_209(vLocal_146, 0);
						}
						func_271(&vLocal_603, &iLocal_602);
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_105))
					{
						unk_0xE30CF11C0EE14316(&iLocal_105);
					}
				}
			}
		}
	}
	func_269();
}

void func_269()//Position - 0x283FB
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_93) && unk_0xB8DE76287EDC4957(iLocal_93, 0))
	{
		switch (iLocal_160)
		{
			case 0:
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0) && !func_270())
				{
					if (!unk_0x4C4813CAAD70E814(0))
					{
						func_238("FM2_BIKE1", -1);
					}
					else
					{
						func_238("FM2_BIKE1_KM", -1);
					}
					iLocal_160++;
				}
				break;
			
			case 1:
				if (!unk_0xB9D80B12FE4456A5())
				{
					if ((!func_237("FM2_BIKE1") && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0)) && !func_270())
					{
						func_238("FM2_BIKE2", -1);
						iLocal_160++;
					}
				}
				else if (((!func_237("FM2_BIKE1") && !func_237("FM2_BIKE1_KM")) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0)) && !func_270())
				{
					func_238("FM2_BIKE2", -1);
					iLocal_160++;
				}
				break;
			
			case 2:
				if ((!func_237("FM2_BIKE2") && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0)) && !func_270())
				{
					if (unk_0xB0DA749C8A7CCBBF(iLocal_93, joaat("bmx")) || unk_0xB0DA749C8A7CCBBF(iLocal_93, joaat("scorcher")))
					{
						func_238("FM2_BIKE3", -1);
					}
					iLocal_160++;
				}
				break;
			
			case 3:
				if (((!func_237("FM2_BIKE2") && !func_237("FM2_BIKE3")) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0)) && !func_270())
				{
					func_238("FM2_BIKE4", -1);
					iLocal_160++;
				}
				break;
		}
		if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0) || func_270())
		{
			if (unk_0xB9D80B12FE4456A5())
			{
				if (func_237("FM2_BIKE1_KM"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
			if ((((func_237("FM2_BIKE1") || func_237("FM2_BIKE2")) || func_237("FM2_BIKE3")) || func_237("FM2_BIKE4")) || func_237("FM2_WHEELIE"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
		}
	}
}

bool func_270()//Position - 0x2861C
{
	return Global_68215;
}

void func_271(int iParam0, int iParam1)//Position - 0x28628
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	vVar3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		fVar4 = system::vdist2(vVar3, *(iParam0[iVar0 /*3*/]));
		if (iVar1 == -1 || fVar4 < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fVar4;
		}
		iVar0++;
	}
	if (system::vdist2(vVar3, *(iParam0[iVar1 + 1 /*3*/])) < system::vdist2(*(iParam0[iVar1 /*3*/]), *(iParam0[iVar1 + 1 /*3*/])))
	{
		iVar1++;
	}
	if (*iParam1 != iVar1)
	{
		if (*iParam1 >= 0 && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), *(iParam0[*iParam1 /*3*/])) > 25f)
		{
			unk_0x981B8A90686AD23E();
			unk_0x57EA9A1F94FD1E76(156, 1, 0);
			iVar0 = iVar1;
			while (iVar0 <= (*iParam0 - 1))
			{
				unk_0x497E80F9DC66C571(*(iParam0[iVar0 /*3*/]));
				iVar0++;
			}
			unk_0x497E80F9DC66C571(*(iParam0[(*iParam0 - 1) /*3*/]));
			unk_0xF906FCF8A11CBA9A(1);
		}
		*iParam1 = iVar1;
	}
}

void func_272(float fParam0, float fParam1, bool bParam2)//Position - 0x28733
{
	float fVar0;
	
	fParam0 = unk_0xE97272C977DEADD3(fParam0);
	fVar0 = system::vdist(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
	if (unk_0xB8DE76287EDC4957(iLocal_93, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_89))
	{
		switch (iLocal_184)
		{
			case 0:
				iLocal_196 = 0;
				iLocal_197 = 0;
				iLocal_198 = 0;
				iLocal_199 = 0;
				iLocal_200 = 0;
				iLocal_187 = 0;
				iLocal_188 = 0;
				iLocal_189 = 0;
				if (bParam2 && fParam0 > 15000f)
				{
					iLocal_199 = 1;
				}
				if (!func_171() && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0))
				{
					if (fVar0 < 35f)
					{
						if (func_157(&Local_549, cLocal_202, "FAM2_PIER", 8, 0, 0, 0))
						{
							system::settimera(0);
							iLocal_184++;
						}
					}
					else
					{
						iLocal_184++;
					}
				}
				break;
			
			case 1:
				if (system::timera() > 2000)
				{
					if ((!func_171() && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0)) && unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_93))
					{
						system::settimera(0);
						unk_0x84CDD933AFA470D2();
						func_147(&Local_543);
						iLocal_184++;
					}
				}
				break;
			
			case 2:
				if ((system::timera() > 1000 && !func_171()) && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0))
				{
					if (fVar0 < 35f)
					{
						if (func_157(&Local_549, cLocal_202, "FAM2_RACEM", 8, 0, 0, 0))
						{
							iLocal_184++;
						}
					}
				}
				else if (system::timera() > 15000)
				{
					iLocal_184++;
				}
				break;
			
			case 3:
				if ((!func_171() && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0)) && fVar0 < 35f)
				{
					if (func_157(&Local_549, cLocal_202, "FAM2_TRIA", 8, 0, 0, 0))
					{
						iLocal_184++;
					}
				}
				break;
			
			case 4:
				if (bParam2)
				{
					unk_0x72903DCF9B54141D("Player in front", 0,01f, 0,68f, 0f, 0, 0, 255, 255);
				}
				else
				{
					unk_0x72903DCF9B54141D("Jimmy in front", 0,01f, 0,68f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_196)
				{
					unk_0x72903DCF9B54141D("Michael take over line should fire", 0,01f, 0,7f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_197)
				{
					unk_0x72903DCF9B54141D("Jimmy take over line should fire", 0,01f, 0,72f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_199)
				{
					unk_0x72903DCF9B54141D("bPlayerHasCheated", 0,01f, 0,74f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_200)
				{
					unk_0x72903DCF9B54141D("bPlayerHasBumpedJimmy", 0,01f, 0,76f, 0f, 0, 0, 255, 255);
				}
				if (bParam2 != bLocal_557)
				{
					iLocal_558 = unk_0x53C562FD2B9E3AB0();
					if (bParam2)
					{
						iLocal_196 = 1;
						iLocal_197 = 0;
						iLocal_186 = (unk_0x53C562FD2B9E3AB0() - 10000);
					}
					else
					{
						iLocal_196 = 0;
						iLocal_197 = 1;
						iLocal_186 = (unk_0x53C562FD2B9E3AB0() - 10000);
					}
				}
				if (iLocal_197)
				{
					if (((unk_0x53C562FD2B9E3AB0() - iLocal_558) < 4000 && fVar0 < 30f) && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0))
					{
						if (func_157(&Local_549, cLocal_202, "FAM2_STUFF", 8, 0, 0, 0))
						{
							iLocal_197 = 0;
						}
					}
					else
					{
						iLocal_197 = 0;
					}
				}
				if (iLocal_196)
				{
					if (((unk_0x53C562FD2B9E3AB0() - iLocal_558) < 4000 && fVar0 < 30f) && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0))
					{
						if (func_157(&Local_549, cLocal_202, "FAM2_PASS", 8, 0, 0, 0))
						{
							iLocal_196 = 0;
						}
					}
					else
					{
						iLocal_196 = 0;
					}
				}
				if (!iLocal_199 && !iLocal_200)
				{
					if (bParam2)
					{
						if (!func_171())
						{
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_559) > 10000)
							{
								if ((!func_171() && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0)) && fVar0 < 35f)
								{
									if (func_157(&Local_549, cLocal_202, "FAM2_ROFF", 8, 0, 0, 0))
									{
										iLocal_559 = unk_0x53C562FD2B9E3AB0();
									}
								}
							}
							else if ((unk_0x53C562FD2B9E3AB0() - iLocal_559) < 5000 && (unk_0x53C562FD2B9E3AB0() - iLocal_186) > 10000)
							{
								if ((!func_171() && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0)) && fVar0 < 40f)
								{
									if (func_157(&Local_549, cLocal_202, "FAM2_FRONT", 8, 0, 0, 0))
									{
										iLocal_186 = unk_0x53C562FD2B9E3AB0();
									}
								}
							}
						}
					}
					else if ((unk_0x53C562FD2B9E3AB0() - iLocal_559) > 10000)
					{
						if (((!func_171() && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0)) && fVar0 < 35f) && !bParam2)
						{
							if (func_157(&Local_549, cLocal_202, "FAM2_CLOSE", 8, 0, 0, 0))
							{
								iLocal_559 = unk_0x53C562FD2B9E3AB0();
							}
						}
					}
					else if ((unk_0x53C562FD2B9E3AB0() - iLocal_559) < 5000 && (unk_0x53C562FD2B9E3AB0() - iLocal_186) > 10000)
					{
						if ((!func_171() && (!unk_0x23F2F89E3D1CB7C4() || unk_0x496616BFA56C89EB(203) == 0)) && fVar0 < 40f)
						{
							if (func_157(&Local_549, cLocal_202, "FAM2_BEH", 8, 0, 0, 0))
							{
								iLocal_186 = unk_0x53C562FD2B9E3AB0();
							}
						}
					}
					if ((fVar0 < 5f && (unk_0x53C562FD2B9E3AB0() - iLocal_187) > 1000) && (unk_0x53C562FD2B9E3AB0() - iLocal_188) > 10000)
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0) && unk_0x9A213A2345825783(iLocal_93, iLocal_94))
						{
							iLocal_200 = 1;
						}
						iLocal_187 = unk_0x53C562FD2B9E3AB0();
					}
					if ((unk_0x53C562FD2B9E3AB0() - iLocal_189) > 10000)
					{
						if (!iLocal_199)
						{
							if (fParam1 > 50f)
							{
								iLocal_199 = 1;
							}
						}
					}
				}
				else if (iLocal_199)
				{
					if ((fVar0 < 35f && !func_171()) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
					{
						if (func_157(&Local_549, cLocal_202, "FAM2_CHEAT", 8, 0, 0, 0))
						{
							iLocal_189 = unk_0x53C562FD2B9E3AB0();
							iLocal_199 = 0;
						}
					}
				}
				else if (iLocal_200)
				{
					if ((fVar0 < 35f && !func_171()) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
					{
						if (func_157(&Local_549, cLocal_202, "FAM2_HIT", 8, 0, 0, 0))
						{
							iLocal_188 = unk_0x53C562FD2B9E3AB0();
							iLocal_200 = 0;
						}
					}
				}
				if (!iLocal_198)
				{
					if (unk_0x0F3033474C49912D(iLocal_89, -1545,975f, -937,1822f, 10,33204f, -1556,068f, -928,8806f, 16,72215f, 3,75f, 0, 1, 0) && fVar0 < 35f)
					{
						iLocal_184++;
						iLocal_186 = unk_0x53C562FD2B9E3AB0();
						iLocal_198 = 1;
					}
				}
				break;
			
			case 5:
				if ((fVar0 < 35f && !func_171()) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
				{
					if (func_157(&Local_549, cLocal_202, "FAM2_JEND", 8, 0, 0, 0))
					{
						iLocal_186 = unk_0x53C562FD2B9E3AB0();
						iLocal_184++;
					}
				}
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_186) > 5000)
				{
					iLocal_184 = 4;
				}
				break;
			
			case 6:
				if ((fVar0 < 35f && !func_171()) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
				{
					if (func_157(&Local_549, cLocal_202, "FAM2_ROFF", 8, 0, 0, 0))
					{
						iLocal_184 = 4;
					}
				}
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_186) > 5000)
				{
					iLocal_184 = 4;
				}
				break;
		}
		bLocal_557 = bParam2;
	}
}

void func_273()//Position - 0x28EBA
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_89) && unk_0xB8DE76287EDC4957(iLocal_94, 0))
	{
		if (unk_0xA8D0477084E86A92(iLocal_89, iLocal_94, 0))
		{
			fLocal_598 = func_274(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), iLocal_158, sLocal_156, &uLocal_213);
			fLocal_599 = func_274(unk_0xB3328BA8976B416C(iLocal_94, 1), iLocal_158, sLocal_156, &uLocal_213);
			if (!iLocal_596)
			{
				if (!iLocal_597)
				{
					if (unk_0x0F3033474C49912D(iLocal_89, -1572,474f, -994,6667f, 2,017392f, -1515,634f, -926,8091f, 29,12276f, 100f, 0, 1, 0) || unk_0x0F3033474C49912D(iLocal_89, -1382,942f, -1442,319f, 3,013994f, -1367,638f, -1471,879f, 8,426488f, 22,25f, 0, 1, 0))
					{
						if (unk_0xA2E853C4E12289ED(iLocal_94) || unk_0x8DDE799D31A3D099(iLocal_94))
						{
							unk_0x7674774BB9279265(iLocal_94);
						}
						unk_0x5CA96D6783EE6897(iLocal_94, iLocal_158, sLocal_156, 15f, 262144);
						iLocal_597 = 1;
					}
				}
				else if (!unk_0x0F3033474C49912D(iLocal_89, -1572,474f, -994,6667f, 2,017392f, -1515,634f, -926,8091f, 29,12276f, 100f, 0, 1, 0) && !unk_0x0F3033474C49912D(iLocal_89, -1382,942f, -1442,319f, 3,013994f, -1367,638f, -1471,879f, 8,426488f, 22,25f, 0, 1, 0))
				{
					if (unk_0xA2E853C4E12289ED(iLocal_94) || unk_0x8DDE799D31A3D099(iLocal_94))
					{
						unk_0x7674774BB9279265(iLocal_94);
					}
					unk_0x5CA96D6783EE6897(iLocal_94, iLocal_158, sLocal_156, 15f, 786549);
					iLocal_597 = 0;
				}
				if ((system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_89, 1)) > 10000f && fLocal_599 > 10f) && (unk_0x0840F461D7BD8859(iLocal_158, sLocal_156) && fLocal_599 < (unk_0x3413A86ABE2F138E(iLocal_158, sLocal_156) - 10f)))
				{
					if ((unk_0xEC211A86AB3726B6(iLocal_89) && unk_0xEC211A86AB3726B6(iLocal_94)) && !unk_0x9E06F0EE20F58CED(unk_0xE0236CBCD003C392(iLocal_158, fLocal_599, sLocal_156), 4f))
					{
						unk_0xB18E1DBC397238E1(iLocal_94, false, 0);
						unk_0x7674774BB9279265(iLocal_94);
						unk_0x8D7ABC97ED508270(iLocal_94, iLocal_158, sLocal_156, 1);
						unk_0x7A1DBB5E36EE3379(iLocal_94, fLocal_599);
						iLocal_596 = 1;
					}
				}
			}
			else if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_89, 1)) < 9025f)
			{
				if (unk_0x8DDE799D31A3D099(iLocal_94))
				{
					unk_0xB18E1DBC397238E1(iLocal_94, true, 0);
					unk_0xD6B1A8B2DA10C9B7(iLocal_94, 786549);
					iLocal_596 = 0;
				}
			}
		}
		else if (unk_0x78F50AA8F955BEFC(iLocal_89, -1794415470) != 1)
		{
			unk_0x6F8C8278B7C06889(iLocal_89, iLocal_94, 20000, -1, 2f, 1, 0);
		}
	}
}

float func_274(vector3 vParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x2915B
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	vector3 vVar14;
	vector3 vVar15;
	vector3 vVar16;
	bool bVar17;
	float fVar18;
	float fVar19;
	
	if (unk_0x0840F461D7BD8859(iParam1, sParam2))
	{
		iVar2[0] = (*uParam3 - 1);
		iVar2[1] = (*uParam3 - 2);
		iVar2[2] = (*uParam3 - 3);
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			fVar3 = unk_0xE97272C977DEADD3((vParam0.x - (*uParam3)[iVar0 /*3*/]));
			fVar4 = unk_0xE97272C977DEADD3((vParam0.y - (uParam3[iVar0 /*3*/])->f_1));
			fVar5 = (fVar3 + fVar4);
			fVar6 = 0f;
			iVar7 = 0;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 != iVar2[iVar1])
				{
					fVar8 = unk_0xE97272C977DEADD3((vParam0.x - (*uParam3)[iVar2[iVar1] /*3*/]));
					fVar9 = unk_0xE97272C977DEADD3((vParam0.y - (uParam3[iVar2[iVar1] /*3*/])->f_1));
					fVar10 = (fVar8 + fVar9);
					if (fVar10 > fVar6)
					{
						iVar7 = iVar1;
						fVar6 = fVar10;
					}
				}
				iVar1++;
			}
			if (fVar5 < fVar6)
			{
				iVar2[iVar7] = iVar0;
			}
			iVar0++;
		}
		fVar11 = 999999f;
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (iVar2[iVar0] > 0)
			{
				vVar14 = { unk_0x1F6BCB690FB61F9A(vParam0, *(uParam3[iVar2[iVar0] /*3*/]), *(uParam3[(iVar2[iVar0] - 1) /*3*/]), 1) };
			}
			else
			{
				vVar14 = { *(uParam3[0 /*3*/]) };
			}
			if (iVar2[iVar0] < (*uParam3 - 2))
			{
				vVar15 = { unk_0x1F6BCB690FB61F9A(vParam0, *(uParam3[iVar2[iVar0] /*3*/]), *(uParam3[iVar2[iVar0] + 1 /*3*/]), 1) };
			}
			else
			{
				vVar15 = { *(uParam3[(*uParam3 - 1) /*3*/]) };
			}
			bVar17 = false;
			if (system::vdist2(vParam0, vVar14) < system::vdist2(vParam0, vVar15))
			{
				vVar16 = { vVar14 };
			}
			else
			{
				bVar17 = true;
				vVar16 = { vVar15 };
			}
			if (system::vdist2(vParam0, vVar16) < fVar11)
			{
				if (bVar17)
				{
					iVar12 = iVar2[iVar0];
				}
				else
				{
					iVar12 = (iVar2[iVar0] - 1);
				}
				fVar11 = system::vdist2(vParam0, vVar16);
				vVar13 = { vVar16 };
			}
			iVar0++;
		}
		iVar12 = func_275(iVar12, 0, (*uParam3 - 2));
		fVar18 = (unk_0x3413A86ABE2F138E(iParam1, sParam2) / IntToFloat((*uParam3 - 1)));
		fVar19 = ((system::vdist(*(uParam3[iVar12 /*3*/]), vVar13) / system::vdist(*(uParam3[iVar12 /*3*/]), *(uParam3[iVar12 + 1 /*3*/]))) * fVar18);
		return (fVar19 + (IntToFloat(iVar12) * fVar18));
	}
	return 0f;
}

int func_275(int iParam0, int iParam1, int iParam2)//Position - 0x293B5
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_276(int iParam0)//Position - 0x293DA
{
	if (!unk_0x9F7B586A14398C40())
	{
		unk_0x59C3AC31C7544A28(iParam0);
		while (!unk_0x9F7B586A14398C40())
		{
			system::wait(0);
		}
	}
}

void func_277()//Position - 0x29400
{
	int iVar0;
	struct<6> Var1;
	var uVar2;
	var uVar3;
	
	unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
	unk_0x7112798C2D20E78A(unk_0x9EB17624F44A8DA4());
	unk_0x72CB9F3FA10C599B(0,4f);
	if (iLocal_159 != 1000)
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 2500f)
		{
			iLocal_163 = iLocal_159;
			iLocal_159 = 1000;
		}
	}
	if (unk_0x771D0F8F56A5FE6C("FAMILY_2_DRIVE_TO_BEACH"))
	{
		if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0xE02E32C69260FBB7("FAMILY_2_DRIVE_TO_BEACH");
		}
	}
	if (iLocal_117 && iLocal_159 > 1)
	{
		if ((unk_0x53C562FD2B9E3AB0() - iLocal_595) < 2000)
		{
			unk_0x691491EBC2D892F5(unk_0xFC1458A37D98B502(), 1f);
		}
		else
		{
			iLocal_117 = 0;
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_89) && !unk_0x3AB6A1A9084FB0A4(iLocal_90))
	{
		switch (iLocal_159)
		{
			case 0:
				iLocal_547 = 0;
				unk_0x88235B448509228B(iLocal_89);
				unk_0x0D9525F20FB71C52(iLocal_158, sLocal_156);
				unk_0x6450931B826B49D9("veh@bicycle@mountain_f@front@base");
				iLocal_159++;
				iLocal_165 = 0;
				iLocal_166 = 0;
				iLocal_164 = 4;
				iLocal_594 = 0;
				iLocal_595 = unk_0x53C562FD2B9E3AB0();
				unk_0x94BD6F0436473406(0,3f);
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
				break;
			
			case -1:
				func_100();
				if ((!unk_0x3AB6A1A9084FB0A4(iLocal_90) && unk_0x50126692B8A3590A(-1105,241f, -1697,025f, 3,3678f, 2f, -741944541, 0)) && unk_0x249997FC5AF56FA8(iLocal_90, "PROP_HUMAN_SEAT_CHAIR"))
				{
					iLocal_155 = 0;
					iLocal_159 = 1;
				}
				break;
			
			case 1:
				iLocal_102 = func_209(vLocal_133, 0);
				if (bLocal_182)
				{
					func_150("FM2_BK2BIKE", 7500, 1);
					system::settimera(0);
				}
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_89, 40000, 4, 2);
				unk_0x60C06BFD037BB7CF(iLocal_89, unk_0xFC1458A37D98B502(), 40000, 4, 2);
				iLocal_591 = 0;
				if (func_171())
				{
					Var1 = { func_309() };
					if (!unk_0x74C475EB8E73D398("FAM2_HIRE1", &Var1))
					{
						func_168();
					}
				}
				iLocal_593 = 0;
				if (unk_0x3E9CABD07B829173())
				{
					unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 0, 0, 0);
				}
				iLocal_159++;
				break;
			
			case 2:
				if (Global_103602)
				{
					while (Global_103602)
					{
						system::wait(0);
					}
				}
				if (unk_0x3E9CABD07B829173() && !unk_0x9BB64DDCD9C7B076())
				{
					unk_0x59C3AC31C7544A28(1000);
				}
				if (unk_0x88DDBE9908752BF0(iLocal_89, 1))
				{
					if (!func_171())
					{
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
						if (unk_0xB8DE76287EDC4957(iLocal_95, 0) && unk_0xA8D0477084E86A92(iLocal_89, iLocal_95, 0))
						{
							unk_0x4F8A35D7CBC17327(iLocal_89, iLocal_95, 0);
						}
						else
						{
							unk_0x16416C5B54FDBCBB(iLocal_89, 0, 0);
						}
					}
				}
				else
				{
					system::settimerb(0);
					iLocal_159++;
				}
				break;
			
			case 3:
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89) && system::timera() > 3000)
				{
					if (!unk_0xCA3C40448996C9BA(iLocal_89, unk_0xFC1458A37D98B502(), 60f))
					{
						if (unk_0x78F50AA8F955BEFC(iLocal_89, 242628503) != 1)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_89);
							unk_0x60C06BFD037BB7CF(iLocal_89, unk_0xFC1458A37D98B502(), -1, 16, 2);
							unk_0x6931076730A4AC5D(&uLocal_520);
							unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
							unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 16, 2);
							unk_0x1B16DD5C115FE009(uLocal_520);
							unk_0xAB30B1CF01A198C1(iLocal_89, uLocal_520);
							unk_0xFAA3EF7FF92E1F9E(&uLocal_520);
						}
					}
					else if (unk_0x78F50AA8F955BEFC(iLocal_89, 242628503) != 1)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
						{
							unk_0x60C06BFD037BB7CF(iLocal_89, unk_0xFC1458A37D98B502(), -1, 16, 2);
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_90))
					{
						if ((system::vdist(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(iLocal_90, 1)) > (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_90, 1)) + 0,3f) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1099,756f, -1700,726f, 3,349046f, -1111,517f, -1683,962f, 5,340389f, 7,25f, 0, 1, 0)) || system::timera() > 6000)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_89);
							iLocal_159++;
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x78F50AA8F955BEFC(iLocal_89, 242628503) != 1 || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1099,756f, -1700,726f, 3,349046f, -1111,517f, -1683,962f, 5,340389f, 7,25f, 0, 1, 0))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_95, 0))
					{
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
						unk_0xEDC33A771FAEB393(iLocal_95, false);
					}
					unk_0x6931076730A4AC5D(&uVar2);
					if (unk_0x88DDBE9908752BF0(iLocal_89, 0))
					{
						unk_0x16416C5B54FDBCBB(0, 0, 0);
					}
					unk_0x380C1E7B7740D618(0, -1102,187f, -1697,891f, 3,3562f, 2f, 20000, 0,25f, 0, 1193033728);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(uVar2);
					unk_0xAB30B1CF01A198C1(iLocal_89, uVar2);
					unk_0xFAA3EF7FF92E1F9E(&uVar2);
					unk_0x5C57ECBE59C08573(iLocal_89, 1f);
					iLocal_159++;
				}
				break;
			
			case 5:
				unk_0x5C57ECBE59C08573(iLocal_89, 1f);
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1099,756f, -1700,726f, 3,349046f, -1111,517f, -1683,962f, 5,340389f, 7,25f, 0, 1, 0))
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						func_154();
						if (func_157(&Local_549, cLocal_202, "FAM2_HIRE3", 8, 0, 0, 0))
						{
							unk_0x84CDD933AFA470D2();
							unk_0x60C06BFD037BB7CF(iLocal_90, unk_0xFC1458A37D98B502(), 30000, 0, 2);
							unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_90, 10000, 0, 2);
							unk_0xE30CF11C0EE14316(&iLocal_102);
							system::settimera(0);
							iLocal_159++;
						}
					}
					else
					{
						iLocal_159++;
					}
				}
				break;
			
			case 6:
				if (unk_0xB8DE76287EDC4957(iLocal_96[iLocal_164], 0) && !unk_0xA8D0477084E86A92(iLocal_89, iLocal_96[iLocal_164], 0))
				{
					if (!unk_0x8EE3A848975DDF21(iLocal_96[iLocal_164], -1, 0))
					{
						if (iLocal_593)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_89);
							iLocal_593 = 0;
						}
						if (iLocal_164 == 4)
						{
							iLocal_164 = 1;
						}
						else if (iLocal_164 == 1)
						{
							iLocal_164 = 4;
						}
					}
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_93))
				{
					unk_0x5C57ECBE59C08573(iLocal_89, 1f);
				}
				unk_0x6450931B826B49D9("veh@bicycle@mountain_f@front@base");
				if (unk_0x3A801AA34DD821BE("veh@bicycle@mountain_f@front@base"))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_96[iLocal_164], 0))
					{
						if (!iLocal_593 && (unk_0x0F3033474C49912D(iLocal_89, -1099,756f, -1700,726f, 3,349046f, -1111,517f, -1683,962f, 5,340389f, 9,25f, 0, 1, 0) || !unk_0x0F3033474C49912D(iLocal_96[iLocal_164], -1099,756f, -1700,726f, 3,349046f, -1111,517f, -1683,962f, 5,340389f, 9,25f, 0, 1, 0)))
						{
							unk_0x6931076730A4AC5D(&uVar3);
							unk_0x6F8C8278B7C06889(0, iLocal_96[iLocal_164], -1, -1, 2f, 1, 0);
							unk_0x270054D97CD161A8(0, 2000);
							unk_0x87A3E70B0AB01608(0, iLocal_96[iLocal_164], -1099,682f, -1694,073f, 3,2758f, 5f, 0, joaat("cruiser"), 786471, 2f, 3f);
							unk_0x1B16DD5C115FE009(uVar3);
							unk_0xAB30B1CF01A198C1(iLocal_89, uVar3);
							unk_0xFAA3EF7FF92E1F9E(&uVar3);
							iLocal_593 = 1;
						}
					}
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_94))
				{
					iVar0 = 0;
					while (iVar0 < iLocal_96)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_96[iVar0]) && unk_0xB8DE76287EDC4957(iLocal_96[iVar0], 0))
						{
							if (unk_0xAAA8D20859E2D36D(iLocal_89, iLocal_96[iVar0]))
							{
								iLocal_94 = iLocal_96[iVar0];
								unk_0xFCD667A487259F5A(iLocal_89, unk_0x8B948C59217A295D("MISS_FAMILY2_JIMMY_BICYCLE"));
								unk_0xCF5EB2CB1B30F02C(iLocal_94, 0);
								func_278(0, 1, 20);
								if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
								{
									func_157(&Local_549, cLocal_202, "FAM2_JBIKE", 8, 0, 0, 0);
								}
								unk_0xB4AF8E4D052DCD63(iLocal_89, 1);
								iLocal_165 = iVar0;
								unk_0xEDC33A771FAEB393(iLocal_94, false);
							}
						}
						iVar0++;
					}
				}
				else if (!unk_0x88DDBE9908752BF0(iLocal_89, 0))
				{
					func_103("FM2_JSPOOK");
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_93))
				{
					iVar0 = 0;
					while (iVar0 < iLocal_96)
					{
						if (unk_0xB8DE76287EDC4957(iLocal_96[iVar0], 0))
						{
							if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_96[iVar0], 1))
							{
								iLocal_93 = iLocal_96[iVar0];
								func_278(0, 1, 20);
								unk_0xEDC33A771FAEB393(iLocal_96[iVar0], false);
								unk_0x84CDD933AFA470D2();
								iLocal_166 = iVar0;
								if ((system::vdist(unk_0xB3328BA8976B416C(iLocal_89, 1), -1108,664f, -1691,623f, 3,3746f) > 5f && !unk_0x88DDBE9908752BF0(iLocal_89, 0)) && iLocal_593)
								{
									iLocal_593 = 0;
								}
							}
						}
						iVar0++;
					}
					if (!iLocal_591)
					{
						if (system::timera() > 1000)
						{
							if (!func_171() || unk_0x496616BFA56C89EB(203) == 0)
							{
								func_148("FM2_CHSEBIKE", 7500, 1);
								iLocal_591 = 1;
							}
						}
					}
				}
				else
				{
					if (!iLocal_594)
					{
						if (func_157(&Local_549, cLocal_202, "FAM2_HIRE4", 8, 0, 0, 0))
						{
							iLocal_594 = 1;
						}
					}
					if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
					{
						iLocal_93 = 0;
					}
				}
				if (((((!func_171() && unk_0x6ADD12BF4D6D2587(iLocal_94)) && unk_0x6ADD12BF4D6D2587(iLocal_93)) && unk_0xB8DE76287EDC4957(iLocal_94, 0)) && unk_0xB8DE76287EDC4957(iLocal_93, 0)) && unk_0xAAA8D20859E2D36D(iLocal_89, iLocal_94))
				{
					iLocal_96[iLocal_166] = 0;
					iLocal_96[iLocal_165] = 0;
					unk_0x1267474D9A69CA37(4f, 10f, 3);
					iLocal_159++;
				}
				break;
			
			case 7:
				if (system::timera() > 3000)
				{
					func_201(3);
				}
				break;
			
			case 1000:
				if (!unk_0xA6DECE14FC9A8C51(iLocal_104))
				{
					if (!bLocal_176)
					{
						unk_0x84CDD933AFA470D2();
						func_154();
						func_150("FM2_JIMGB", 7500, 1);
					}
					iLocal_104 = func_151(iLocal_89, 0, 145);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_102))
				{
					if (unk_0x94540F498465F1A2(iLocal_102) != 0)
					{
						unk_0xF20857E4CB32A2B7(iLocal_102, 0);
					}
				}
				if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 400f || (!unk_0x3AB6A1A9084FB0A4(iLocal_90) && system::vdist2(unk_0xB3328BA8976B416C(iLocal_90, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 900f))
				{
					iLocal_159 = iLocal_163;
					if (unk_0xA6DECE14FC9A8C51(iLocal_102))
					{
						if (unk_0x94540F498465F1A2(iLocal_102) != 255)
						{
							unk_0xF20857E4CB32A2B7(iLocal_102, 255);
						}
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_104))
					{
						unk_0xE30CF11C0EE14316(&iLocal_104);
					}
				}
				if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 22500f)
				{
					func_103("FM2_JIMAB");
				}
				break;
		}
		if (!iLocal_592)
		{
			if ((unk_0xB8DE76287EDC4957(iLocal_94, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_89)) && unk_0xA8D0477084E86A92(iLocal_89, iLocal_94, 0))
			{
				unk_0xEDC33A771FAEB393(iLocal_94, false);
				iLocal_592 = 1;
			}
		}
	}
	if ((unk_0x6ADD12BF4D6D2587(iLocal_93) && unk_0xB8DE76287EDC4957(iLocal_93, 0)) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_93, 0))
	{
		if (!unk_0x771D0F8F56A5FE6C("FAMILY_2_BIKE_RACE_JIMMY"))
		{
			unk_0xE859EF37EA7362D3("FAMILY_2_BIKE_RACE_JIMMY");
		}
	}
}

int func_278(int iParam0, int iParam1, int iParam2)//Position - 0x29E48
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_279(Global_104555.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_279(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x29E91
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_308();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_307(99, 1);
					func_306(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_306(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_306(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_291(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_287(5))
					{
						fVar0 = 0,9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_306(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_306(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_306(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_287(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_306(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_306(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_306(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_306(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_306(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_306(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_306(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_306(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_306(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x5D6DB7DE15F99EF2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_306(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_306(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_306(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_306(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_306(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_306(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_287(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_306(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_306(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_306(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_306(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_306(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_306(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_286(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_307(95, iParam3);
					break;
				
				case 1:
					func_307(97, iParam3);
					break;
				
				case 2:
					func_307(96, iParam3);
					break;
			}
			func_307(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_282(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_282(iVar1);
	}
	iVar5 = (Global_53077[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53077[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53077[iVar2] = 2147483647;
				}
				else
				{
					Global_53077[iVar2] = (Global_53077[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_306(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_306(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_306(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53077[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53077[iVar2];
			Global_53077[iVar2] = (Global_53077[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104555.f_20534.f_233[iVar2 /*69*/]++;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_281(iParam0);
	if (Global_35861 == 15)
	{
		func_280(0);
	}
	return 1;
}

void func_280(bool bParam0)//Position - 0x2A490
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53085[iVar0 /*3*/][0] = Global_104555.f_20534[iVar0];
		Global_53085.f_31[iVar0 /*3*/][0] = Global_104555.f_20534.f_11[iVar0];
		Global_53085.f_62[iVar0 /*3*/][0] = Global_104555.f_20534.f_22[iVar0];
		Global_53085.f_93[iVar0 /*3*/][0] = Global_104555.f_20534.f_33[iVar0];
		Global_53085.f_124[iVar0 /*3*/][0] = Global_104555.f_20534.f_44[iVar0];
		Global_53085.f_155[iVar0 /*3*/][0] = Global_104555.f_20534.f_55[iVar0];
		Global_53085.f_186[iVar0 /*3*/][0] = Global_104555.f_20534.f_66[iVar0];
		Global_53085.f_217[iVar0 /*3*/][0] = Global_104555.f_20534.f_77[iVar0];
		Global_53085.f_248[iVar0 /*3*/][0] = Global_104555.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53085[iVar0 /*3*/][1] = Global_104555.f_20534[iVar0];
			Global_53085.f_31[iVar0 /*3*/][1] = Global_104555.f_20534.f_11[iVar0];
			Global_53085.f_62[iVar0 /*3*/][1] = Global_104555.f_20534.f_22[iVar0];
			Global_53085.f_93[iVar0 /*3*/][1] = Global_104555.f_20534.f_33[iVar0];
			Global_53085.f_124[iVar0 /*3*/][1] = Global_104555.f_20534.f_44[iVar0];
			Global_53085.f_155[iVar0 /*3*/][1] = Global_104555.f_20534.f_55[iVar0];
			Global_53085.f_186[iVar0 /*3*/][1] = Global_104555.f_20534.f_66[iVar0];
			Global_53085.f_217[iVar0 /*3*/][1] = Global_104555.f_20534.f_77[iVar0];
			Global_53085.f_248[iVar0 /*3*/][1] = Global_104555.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_281(int iParam0)//Position - 0x2A712
{
	int iVar0;
	
	iVar0 = Global_53077[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xBFFF62F75445099D(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xBFFF62F75445099D(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xBFFF62F75445099D(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_282(int iParam0)//Position - 0x2A76C
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_285(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x3A711520F83BAE98())
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_284() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_284() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_283(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_283(int iParam0)//Position - 0x2A842
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_284()//Position - 0x2A8C9
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_285(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2A8D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_22();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar17, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_286(int iParam0)//Position - 0x2ADA2
{
	func_307(93, iParam0);
	func_307(29, iParam0);
	func_307(30, iParam0);
}

bool func_287(int iParam0)//Position - 0x2ADC2
{
	if (iParam0 == 8)
	{
		return func_288(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_284() /*12130*/].f_7676.f_10, iParam0);
}

int func_288(int iParam0, int iParam1, int iParam2)//Position - 0x2AE10
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_22();
	}
	iVar1 = func_290(iParam0, iParam1);
	uVar2 = func_289(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_289(int iParam0)//Position - 0x2AE4D
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_290(int iParam0, int iParam1)//Position - 0x2B10D
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_22();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_291(bool bParam0)//Position - 0x2B3AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xF9F3676C0864728D(27))
	{
		return 0;
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xFA3CE529DBB66C85(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xBFFF62F75445099D(joaat("num_cash_spent"), iVar1, 1);
		func_305(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_292(27, 1);
	return 1;
}

int func_292(int iParam0, int iParam1)//Position - 0x2B466
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_293(iParam0, iParam1);
}

int func_293(int iParam0, int iParam1)//Position - 0x2B481
{
	if (func_27(14) && !func_304(iParam0))
	{
		return 0;
	}
	if (unk_0xF9F3676C0864728D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25480 != 0 && !Global_70856)
	{
		return 0;
	}
	if (func_303(&Global_4267379))
	{
		if (func_301(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_294(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x603018B05987F5A9(iParam0))
		{
			return 0;
		}
		if (unk_0xF9F3676C0864728D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_294(var uParam0, int iParam1)//Position - 0x2B51E
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_304(iParam1))
	{
		return 0;
	}
	if (func_301(uParam0, iParam1))
	{
		return 0;
	}
	if (func_300(uParam0) < 0f)
	{
		func_299(uParam0, 0);
	}
	func_297(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_295(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_295(var uParam0, int iParam1)//Position - 0x2B5CF
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_304(iParam1))
	{
		return 0;
	}
	if (func_301(uParam0, iParam1))
	{
		return 0;
	}
	if (func_300(uParam0) < 0f)
	{
		func_299(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_296(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_296(var uParam0, int iParam1)//Position - 0x2B64A
{
	return (*uParam0)[iParam1] == 78;
}

void func_297(var uParam0)//Position - 0x2B65B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_298(uParam0, iVar0);
		iVar0++;
	}
	func_299(uParam0, (Global_4267378 - 0,5f));
}

void func_298(var uParam0, int iParam1)//Position - 0x2B68F
{
	(*uParam0)[iParam1] = 78;
}

void func_299(var uParam0, float fParam1)//Position - 0x2B69F
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_300(var uParam0)//Position - 0x2B6BC
{
	return uParam0->f_80;
}

bool func_301(var uParam0, int iParam1)//Position - 0x2B6C8
{
	return func_302(uParam0, iParam1) != -1;
}

int func_302(var uParam0, int iParam1)//Position - 0x2B6DA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_303(var uParam0)//Position - 0x2B707
{
	return uParam0->f_79 == 1;
}

int func_304(int iParam0)//Position - 0x2B715
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_305(int iParam0, int iParam1)//Position - 0x2B765
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xDE008D1391A23FFE(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x2FD2B2D208844275(iParam0, iParam1);
	}
	return 0;
}

void func_306(int iParam0, int iParam1)//Position - 0x2B7B6
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_307(int iParam0, int iParam1)//Position - 0x2B7D9
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x3A711520F83BAE98())
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/])
	{
		unk_0xFA3CE529DBB66C85(Global_51645[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xBFFF62F75445099D(Global_51645[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_308()//Position - 0x2B836
{
	int iVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		unk_0xFA3CE529DBB66C85(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53077[0] == iVar0)
		{
			Global_53077[0] = iVar0;
		}
		unk_0xFA3CE529DBB66C85(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53077[1] == iVar0)
		{
			Global_53077[1] = iVar0;
		}
		unk_0xFA3CE529DBB66C85(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53077[2] == iVar0)
		{
			Global_53077[2] = iVar0;
		}
	}
}

struct<6> func_309()//Position - 0x2B8AB
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

void func_310()//Position - 0x2B8CF
{
	bool bVar0;
	var uVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_108))
		{
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_120) < 2500f)
			{
				unk_0x6FF834D85E2DD4C6(joaat("prop_cs_office_chair"));
				if (unk_0x9A0B2ED5055D3F0B(joaat("prop_cs_office_chair")))
				{
					iLocal_108 = unk_0x5E35CF35E65D69B9(joaat("prop_cs_office_chair"), -809,4098f, 172,7913f, 75,7732f, 1, true, 0);
					unk_0x47F55B6102CA9143(iLocal_108, 0f, 0f, 0,3857f, 0,9226f);
					unk_0x14776E43F90DD454(joaat("prop_cs_office_chair"));
				}
			}
		}
		else if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_120) > 5625f && unk_0xEC211A86AB3726B6(iLocal_108))
		{
			unk_0x452336926718D62A(&iLocal_108);
		}
	}
	func_356();
	if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_133) < 1000f)
	{
		unk_0x72CB9F3FA10C599B(0,5f);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
	{
		if (!unk_0x88DDBE9908752BF0(iLocal_89, 0))
		{
			unk_0x2217C45231E6A537(iLocal_89, 60, true);
		}
		switch (iLocal_159)
		{
			case 0:
				iLocal_590 = 0;
				if (!unk_0x6ADD12BF4D6D2587(iLocal_98))
				{
					func_324(&iLocal_98, 0, vLocal_126, fLocal_127, 1, 1);
				}
				else if (unk_0xB8DE76287EDC4957(iLocal_98, 0))
				{
					unk_0xBD8D47FDC6902B2D(iLocal_98, vLocal_126, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_98, fLocal_127);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_95, 0))
				{
					unk_0xFBA991D3A851E195(iLocal_98, 1);
				}
				if (!unk_0x4B2B9484BBAA2F31(iLocal_89))
				{
					unk_0xFB02C50CC0E93FAA(iLocal_89, sLocal_157, 0, 8, -1);
				}
				bLocal_175 = false;
				bLocal_176 = false;
				unk_0x59C3AC31C7544A28(500);
				unk_0xDE285E8FA18B66DD("RADIO_01_CLASS_ROCK");
				if (unk_0x6ADD12BF4D6D2587(iLocal_89) && !unk_0xDE3C98B57A41E603(iLocal_89))
				{
					unk_0xB3A8974D2C811672(iLocal_89, true, 0);
				}
				if (iLocal_155)
				{
					unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 1, 1, 0);
					unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 2000, 0, 1, 0);
					iLocal_155 = 0;
				}
				iLocal_159++;
				break;
			
			case 1:
				if (!unk_0x6ADD12BF4D6D2587(iLocal_95))
				{
					func_315(&iLocal_97, 15, -812,4639f, 159,7855f, 71,0588f, 113,1515f, 1, 1);
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_98))
				{
					func_324(&iLocal_98, 0, vLocal_126, fLocal_127, 1, 1);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_97) && unk_0x6ADD12BF4D6D2587(iLocal_98))
				{
					iLocal_159++;
				}
				break;
			
			case 2:
				if (unk_0x4B2B9484BBAA2F31(iLocal_89) && !unk_0xC816B63289F7A279(iLocal_89))
				{
					if (unk_0x0732FE63BEBCD919(iLocal_89) > 13)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_98) && unk_0xB8DE76287EDC4957(iLocal_98, 0))
						{
							unk_0x6F8C8278B7C06889(iLocal_89, iLocal_98, -1, 0, 1f, 1, 0);
						}
						else if (unk_0x6ADD12BF4D6D2587(iLocal_95) && unk_0xB8DE76287EDC4957(iLocal_95, 0))
						{
							unk_0x6F8C8278B7C06889(iLocal_89, iLocal_95, -1, 0, 1f, 1, 0);
						}
						unk_0xD22D83D359390CC6(sLocal_157);
					}
				}
				if (!iLocal_590)
				{
					if ((((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -818,1541f, 177,6431f, 75,12778f, -819,7911f, 176,9991f, 70,62586f, 3,25f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -795,1501f, 176,5434f, 74,13519f, -795,5303f, 177,5501f, 71,83518f, 2,5f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -793,7302f, 181,551f, 74,13519f, -792,5385f, 182,0002f, 71,83518f, 2,5f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -802,4019f, 167,6163f, 79,10717f, -801,4336f, 165,4639f, 76,0724f, 2,5f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -806,8907f, 185,8457f, 71,43164f, -807,4306f, 187,2417f, 74,22646f, 1,75f, 0, 1, 0))
					{
						iLocal_590 = 1;
					}
				}
				bVar0 = false;
				if ((unk_0xB8DE76287EDC4957(iLocal_98, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_98, 0)) || !unk_0x6ADD12BF4D6D2587(iLocal_98))
				{
					bVar0 = true;
				}
				if ((system::vdist(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 15f || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && iLocal_590)
				{
					if (!bVar0)
					{
						unk_0xB8E08BD5B184DF4E(iLocal_89);
					}
					unk_0x57FB41CABA25835C(iLocal_89, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4()));
					unk_0xF6A83791895D5AA1(iLocal_89, 0);
					iLocal_159++;
				}
				break;
			
			case 3:
				if (unk_0x4B2B9484BBAA2F31(iLocal_89))
				{
					if (unk_0x0732FE63BEBCD919(iLocal_89) > 13)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_98) && unk_0xB8DE76287EDC4957(iLocal_98, 0))
						{
							unk_0x6F8C8278B7C06889(iLocal_89, iLocal_98, -1, 0, 1f, 1, 0);
						}
						else if (unk_0x6ADD12BF4D6D2587(iLocal_95) && unk_0xB8DE76287EDC4957(iLocal_95, 0))
						{
							unk_0x6F8C8278B7C06889(iLocal_89, iLocal_95, -1, 0, 1f, 1, 0);
							unk_0x31BBD48AA2503617(iLocal_89, -668482597, 0, 0, 0);
						}
						unk_0xD22D83D359390CC6(sLocal_157);
					}
				}
				if (func_156(iLocal_89))
				{
					if (!unk_0x6ADD12BF4D6D2587(iLocal_95))
					{
						if ((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && unk_0x317536BCEA8FA6B0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), -1, 0) == unk_0xFC1458A37D98B502())
						{
							iLocal_95 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
							unk_0xDD29FF4BAB8AFF9C(iLocal_95, true, 1);
							unk_0xFBA991D3A851E195(iLocal_95, 1);
							unk_0x1267474D9A69CA37(3f, 5f, 3);
							func_314(iLocal_95, 209);
						}
					}
					else
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_95, 0))
						{
							bLocal_175 = true;
						}
						if (unk_0xB8DE76287EDC4957(iLocal_95, 0))
						{
							if ((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_95, 0)) && unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
							{
								iLocal_95 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
								unk_0xDD29FF4BAB8AFF9C(iLocal_95, true, 1);
								unk_0xFBA991D3A851E195(iLocal_95, 1);
								func_314(iLocal_95, 209);
							}
						}
						else
						{
							unk_0x5380482A432E314E(&iLocal_95);
						}
					}
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						bLocal_175 = false;
					}
					if (bLocal_175)
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_102))
						{
							if (!func_105(unk_0x67247AA13B7486A3(iLocal_102), vLocal_131, 0))
							{
								unk_0xE30CF11C0EE14316(&iLocal_102);
							}
						}
						else
						{
							iLocal_102 = func_209(vLocal_131, 1);
						}
					}
					else if (unk_0xA6DECE14FC9A8C51(iLocal_102))
					{
						if (!func_105(unk_0x67247AA13B7486A3(iLocal_102), -1103,213f, -1695,151f, 3,3416f, 0))
						{
							unk_0xE30CF11C0EE14316(&iLocal_102);
						}
					}
					else
					{
						iLocal_102 = func_209(-1103,213f, -1695,151f, 3,3416f, 0);
					}
					if (bLocal_175)
					{
						if ((unk_0xB8DE76287EDC4957(iLocal_95, 0) && unk_0x0C88267282FD588F(iLocal_95, vLocal_131, 3f, 3f, 2f, 1, 1, 0)) && unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_95))
						{
							unk_0xE30CF11C0EE14316(&iLocal_102);
							iLocal_159++;
						}
					}
					else if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1103,213f, -1695,151f, 3,3416f, 6f, 6f, 2f, 1, 1, 0))
					{
						func_201(2);
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_104))
					{
						unk_0x84CDD933AFA470D2();
						unk_0xE30CF11C0EE14316(&iLocal_104);
					}
				}
				else
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_102))
					{
						unk_0xE30CF11C0EE14316(&iLocal_102);
					}
					if (!unk_0xA6DECE14FC9A8C51(iLocal_104))
					{
						unk_0x84CDD933AFA470D2();
						if (func_171())
						{
							Local_556 = { func_170() };
							func_168();
							iLocal_555 = 1;
						}
						func_154();
						if (!bLocal_176)
						{
							func_150("FM2_JIMGB", 7500, 1);
						}
						iLocal_104 = func_151(iLocal_89, 0, 145);
					}
				}
				if ((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && unk_0x95EC8AE7E4F33F6E(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 0)
				{
					if (!func_171() && !iLocal_183)
					{
						func_150("FM2_BIGGERV", 7500, 1);
						iLocal_183 = 1;
					}
				}
				else if (!func_171() && iLocal_183)
				{
					unk_0x84CDD933AFA470D2();
					iLocal_183 = 0;
				}
				break;
			
			case 4:
				if (unk_0xB8DE76287EDC4957(iLocal_95, 0))
				{
					if (func_202(iLocal_95, 4f, 1, 1056964608, 0, 1, 0))
					{
						if (unk_0xA8D0477084E86A92(iLocal_89, iLocal_95, 0))
						{
							if (func_313(0))
							{
								func_311(1);
							}
							func_168();
							unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_95, 10f, 5f, 0f), 20000, 4, 3);
							if (!func_171())
							{
								if (func_157(&Local_549, cLocal_202, "FAM2_HIRE1", 8, 0, 0, 0))
								{
									iLocal_555 = 0;
									unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_89, 30000, 4, 2);
									unk_0x6931076730A4AC5D(&uVar1);
									unk_0x4F8A35D7CBC17327(0, iLocal_95, 0);
									unk_0x380C1E7B7740D618(0, -1102,187f, -1697,891f, 3,3562f, 1f, 20000, 0,25f, 0, 1193033728);
									unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
									unk_0x1B16DD5C115FE009(uVar1);
									unk_0xAB30B1CF01A198C1(iLocal_89, uVar1);
									unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
									unk_0x88235B448509228B(iLocal_89);
									unk_0xFAA3EF7FF92E1F9E(&uVar1);
									unk_0x1267474D9A69CA37(4f, 4f, 4);
									iLocal_159 = 8;
								}
							}
						}
						else
						{
							unk_0x1267474D9A69CA37(5f, 10f, 3);
							func_314(0, 209);
							func_201(2);
						}
					}
				}
				break;
			
			case 5:
				if (func_157(&Local_549, cLocal_202, "FAM2_HIRE1", 8, 0, 0, 0))
				{
					unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_89, 20000, 4, 3);
					system::settimera(0);
					iLocal_159 = 8;
				}
				break;
			
			case 8:
				unk_0x1267474D9A69CA37(5f, 10f, 4);
				func_314(0, 209);
				func_201(2);
				break;
		}
		if (unk_0xB8DE76287EDC4957(iLocal_95, 0))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_95, 0))
			{
				if (!unk_0x771D0F8F56A5FE6C("FAMILY_2_DRIVE_TO_BEACH"))
				{
					unk_0xE859EF37EA7362D3("FAMILY_2_DRIVE_TO_BEACH");
				}
			}
			else if (unk_0x771D0F8F56A5FE6C("FAMILY_2_DRIVE_TO_BEACH"))
			{
				unk_0xE02E32C69260FBB7("FAMILY_2_DRIVE_TO_BEACH");
			}
		}
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
	{
		func_146();
	}
}

void func_311(int iParam0)//Position - 0x2C21C
{
	if (Global_14615)
	{
		func_312(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0x872F1C1F8587CCC7(&Global_2324, 16);
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		unk_0xB31CEFB00C146C91(false);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 30);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 30);
	}
	if (!func_161())
	{
		Global_14453.f_1 = 3;
	}
}

void func_312(bool bParam0, bool bParam1)//Position - 0x2C28C
{
	if (bParam0)
	{
		if (func_313(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0x494F5FA1BF017D58(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x0D75BB9393CE608D(Global_14390);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
}

int func_313(int iParam0)//Position - 0x2C300
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_314(int iParam0, int iParam1)//Position - 0x2C35A
{
	Global_55914 = iParam0;
	Global_55915 = iParam1;
}

int func_315(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)//Position - 0x2C36C
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	
	if (!func_89(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_200(iParam1, &Var0, iParam5);
		if (unk_0x6ADD12BF4D6D2587(*iParam0))
		{
			if (unk_0x82FF3DFBC3965CC0(*iParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_104555.f_2353.f_539.f_3598[0 /*197*/][0 /*98*/] == Var0) || (iParam1 == 15 && Global_104555.f_2353.f_539.f_3598[0 /*197*/][1 /*98*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar1 = 1;
			}
			unk_0x6FF834D85E2DD4C6(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/]);
			if (unk_0x9A0B2ED5055D3F0B(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/]))
			{
				*iParam0 = unk_0xEA60F3B426BB095B(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/], vParam2, fParam3, 0, 0, 0);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, 0);
				unk_0x438D30A195B65156(*iParam0, true);
				unk_0xE01CE1EBCD7EE551(*iParam0, 1250, 0);
				unk_0xB38E13EF2EC6F0E9(*iParam0, 1250f);
				unk_0xC7C8A97B94385008(*iParam0, 1250f);
				Var0.f_3 = 1250;
				unk_0x1E7A8525FB41AAFE(*iParam0, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_5, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_6);
				unk_0xB1AB9FD8B4959960(*iParam0, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_7, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_8);
				unk_0xF95D8D0BCEC9D59A(*iParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					unk_0x7B3133EBCD34B431(*iParam0, iVar2 + 1, !Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (unk_0x965BEFCC45024E92(*iParam0, 0))
					{
						if (Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_24)
						{
							unk_0x4B004F11F16CA872(*iParam0, 1);
						}
						else
						{
							unk_0x54DFCB9F4F68A288(*iParam0, 1);
						}
					}
				}
				unk_0xE58BC5B025017AE2(*iParam0, &(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_26 < unk_0xD559B6108233E114())
				{
					unk_0xFD5736F667C70A28(*iParam0, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_26);
				}
				unk_0x94D4C393A9825924(*iParam0, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_84, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_85, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_86);
				unk_0x4D7D93C6E0C1063B(*iParam0, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_88);
				unk_0xDAA5C9C59AF4D4EB(*iParam0, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_87);
				unk_0x7F254E8C9247E923(*iParam0, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_93, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_94, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_95);
				unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_92, 28));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_92, 29));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_92, 30));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					unk_0xC7BF27112709A906(*iParam0, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
						{
							if (Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				func_319(iParam0, &(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_31), &(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/].f_81));
				unk_0xC0E8D21B09ADD40A(*iParam0, Var0.f_96);
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Global_104555.f_2353.f_539.f_3598[0 /*197*/][iVar1 /*98*/]);
				}
				func_318(*iParam0);
				return 1;
			}
		}
		else
		{
			unk_0x6FF834D85E2DD4C6(Var0);
			if (unk_0x9A0B2ED5055D3F0B(Var0))
			{
				*iParam0 = unk_0xEA60F3B426BB095B(Var0, vParam2, fParam3, 0, 0, 0);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, 0);
				unk_0x438D30A195B65156(*iParam0, true);
				func_316(iParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					func_318(*iParam0);
				}
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_316(int iParam0, struct<98> Param1)//Position - 0x2C942
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		unk_0x207466E78DA21033(*iParam0, Param1.f_4);
	}
	else
	{
		unk_0x1E7A8525FB41AAFE(*iParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		unk_0xB1AB9FD8B4959960(*iParam0, Param1.f_7, Param1.f_8);
	}
	unk_0xF95D8D0BCEC9D59A(*iParam0, Param1.f_2);
	unk_0xE01CE1EBCD7EE551(*iParam0, Param1.f_3, 0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		unk_0x7B3133EBCD34B431(*iParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (unk_0x965BEFCC45024E92(*iParam0, 0))
		{
			unk_0x4B004F11F16CA872(*iParam0, 1);
		}
	}
	if (func_317(&uVar2, &iVar1) && Param1.f_97)
	{
		unk_0xE58BC5B025017AE2(*iParam0, &uVar2);
		unk_0xFD5736F667C70A28(*iParam0, iVar1);
	}
	else if (!unk_0xAB019B170BF1309C(&(Param1.f_27)))
	{
		unk_0xE58BC5B025017AE2(*iParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < unk_0xD559B6108233E114())
		{
			unk_0xFD5736F667C70A28(*iParam0, Param1.f_26);
		}
	}
	unk_0x94D4C393A9825924(*iParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	unk_0x4D7D93C6E0C1063B(*iParam0, Param1.f_88);
	unk_0xDAA5C9C59AF4D4EB(*iParam0, Param1.f_87);
	unk_0x7F254E8C9247E923(*iParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Param1.f_92, 28));
	unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Param1.f_92, 29));
	unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Param1.f_92, 30));
	unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Param1.f_92, 31));
	if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Param1.f_89 >= 0)
	{
		unk_0xC7BF27112709A906(*iParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
		{
			if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
			{
				if (Param1.f_90 == 6)
				{
					unk_0xC195F0A7CE73E810(*iParam0, Param1.f_90);
				}
			}
			else
			{
				unk_0xC195F0A7CE73E810(*iParam0, Param1.f_90);
			}
		}
	}
	func_319(iParam0, &(Param1.f_31), &(Param1.f_81));
	unk_0xC0E8D21B09ADD40A(*iParam0, Param1.f_96);
}

int func_317(var uParam0, int iParam1)//Position - 0x2CB44
{
	if (unk_0x3A711520F83BAE98())
	{
	}
	else if (Global_104555.f_20088.f_261)
	{
		*uParam0 = { Global_104555.f_20088.f_267 };
		*iParam1 = Global_104555.f_20088.f_271;
		return 1;
	}
	return 0;
}

void func_318(var uParam0)//Position - 0x2CB85
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x6ADD12BF4D6D2587(Global_90339[iVar0]))
		{
			Global_90339[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

int func_319(int iParam0, var uParam1, var uParam2)//Position - 0x2CBC2
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xA0A6811A3E4062D1(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4705D420368126DF(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xF928889F6E5C7677(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x75F267954030DBEB(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_323(unk_0x82FF3DFBC3965CC0(*iParam0), 1) && unk_0xF928889F6E5C7677(*iParam0, 24) != func_322(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA9EF3F93CBFFF6D0(*iParam0, 24, func_322(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_321(iParam0);
	if (func_320(*iParam0))
	{
		unk_0x9980244E5DAEFED4(*iParam0, 1);
		unk_0x438D30A195B65156(*iParam0, true);
	}
	return 1;
}

int func_320(int iParam0)//Position - 0x2CD40
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xF928889F6E5C7677(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xDC300345F8ACC8C3(iParam0, iVar1, unk_0xF928889F6E5C7677(iParam0, iVar1)), 16);
				iVar2 = unk_0x8B948C59217A295D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x8B948C59217A295D("MNU_CAGE") || iVar2 == unk_0x8B948C59217A295D("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_321(var uParam0)//Position - 0x2CE1C
{
	switch (unk_0x82FF3DFBC3965CC0(*uParam0))
	{
		case -1700874274:
			if (unk_0xF928889F6E5C7677(*uParam0, 4) == 0)
			{
				unk_0xA9EF3F93CBFFF6D0(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x75F267954030DBEB(*uParam0, 13);
			}
			break;
	}
}

int func_322(int iParam0, int iParam1)//Position - 0x2CE5C
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0x82FF3DFBC3965CC0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x2E9AFFEE33324CC8(iParam0, 38);
		iVar1 = unk_0x2E9AFFEE33324CC8(iParam0, 24);
		fVar2 = (system::to_float(iParam1 + 1) / system::to_float(iVar0));
		iVar3 = (system::floor((system::to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_323(int iParam0, int iParam1)//Position - 0x2CF41
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13545)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13546)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13544)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13547)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13549)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13548)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17990)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17992)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17996)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17993)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18000)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17998)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18003)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_19922)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_19923)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

int func_324(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)//Position - 0x2D1B4
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_89(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_355(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (unk_0x6ADD12BF4D6D2587(*iParam0))
		{
			if (unk_0x82FF3DFBC3965CC0(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_104555.f_2353.f_539.f_4296) && Global_104555.f_9055.f_99.f_58[131])
		{
			Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x6FF834D85E2DD4C6(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x9A0B2ED5055D3F0B(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xEA60F3B426BB095B(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, 0, 0, 0);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, 0);
				unk_0x438D30A195B65156(*iParam0, true);
				unk_0xE01CE1EBCD7EE551(*iParam0, 1250, 0);
				unk_0xB38E13EF2EC6F0E9(*iParam0, 1250f);
				unk_0xC7C8A97B94385008(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x1E7A8525FB41AAFE(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_5, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xB1AB9FD8B4959960(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_7, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xF95D8D0BCEC9D59A(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0x7B3133EBCD34B431(*iParam0, iVar3 + 1, !Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xC3DA759CFFFBDBF8(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_317(&uVar1, &iVar0))
				{
					unk_0xE58BC5B025017AE2(*iParam0, &uVar1);
					unk_0xFD5736F667C70A28(*iParam0, iVar0);
				}
				else
				{
					unk_0xE58BC5B025017AE2(*iParam0, &(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xD559B6108233E114())
					{
						unk_0xFD5736F667C70A28(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x94D4C393A9825924(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_84, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_85, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x4D7D93C6E0C1063B(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0xDAA5C9C59AF4D4EB(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x7F254E8C9247E923(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_93, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_94, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xC7BF27112709A906(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
						{
							if (Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_319(iParam0, &(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_31), &(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0xC0E8D21B09ADD40A(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bodhi2"))
					{
						func_353(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Global_104555.f_2353.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
				}
				func_352(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x6FF834D85E2DD4C6(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x9A0B2ED5055D3F0B(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xEA60F3B426BB095B(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, 0, 0, 0);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, 0);
				unk_0x438D30A195B65156(*iParam0, true);
				unk_0xE01CE1EBCD7EE551(*iParam0, 1250, 0);
				unk_0xB38E13EF2EC6F0E9(*iParam0, 1250f);
				unk_0xC7C8A97B94385008(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x1E7A8525FB41AAFE(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_5, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xB1AB9FD8B4959960(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_7, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xF95D8D0BCEC9D59A(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0x7B3133EBCD34B431(*iParam0, iVar4 + 1, !Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xC3DA759CFFFBDBF8(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_317(&uVar1, &iVar0))
				{
					unk_0xE58BC5B025017AE2(*iParam0, &uVar1);
					unk_0xFD5736F667C70A28(*iParam0, iVar0);
				}
				else
				{
					unk_0xE58BC5B025017AE2(*iParam0, &(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xD559B6108233E114())
					{
						unk_0xFD5736F667C70A28(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x94D4C393A9825924(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_84, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_85, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x4D7D93C6E0C1063B(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0xDAA5C9C59AF4D4EB(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x7F254E8C9247E923(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_93, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_94, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xC7BF27112709A906(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
						{
							if (Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xC195F0A7CE73E810(*iParam0, Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_319(iParam0, &(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_31), &(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0xC0E8D21B09ADD40A(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bodhi2"))
					{
						func_353(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Global_104555.f_2353.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
				}
				func_352(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x6FF834D85E2DD4C6(Var2);
			if (unk_0x9A0B2ED5055D3F0B(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0xEA60F3B426BB095B(Var2, vParam2, fParam3, 1, 1, 0);
				unk_0xACE486395AA1867D(*iParam0, 1084227584);
				unk_0xD8D940C0BFD3E1EC(*iParam0, 0);
				unk_0x1F0117F8A8E4EC12(*iParam0, 0);
				unk_0x438D30A195B65156(*iParam0, true);
				StringCopy(&cVar6, unk_0xF2D2D6860D636A58(*iParam0), 16);
				unk_0xE01CE1EBCD7EE551(*iParam0, 1250, 0);
				unk_0xB38E13EF2EC6F0E9(*iParam0, 1250f);
				unk_0xC7C8A97B94385008(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x1E7A8525FB41AAFE(*iParam0, Var2.f_5, Var2.f_6);
				unk_0xB1AB9FD8B4959960(*iParam0, Var2.f_7, Var2.f_8);
				unk_0xF95D8D0BCEC9D59A(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0x7B3133EBCD34B431(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					unk_0xC3DA759CFFFBDBF8(*iParam0, Var2.f_24);
				}
				if (func_317(&uVar1, &iVar0))
				{
					unk_0xE58BC5B025017AE2(*iParam0, &uVar1);
					unk_0xFD5736F667C70A28(*iParam0, iVar0);
				}
				else
				{
					unk_0xE58BC5B025017AE2(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < unk_0xD559B6108233E114())
					{
						unk_0xFD5736F667C70A28(*iParam0, Var2.f_26);
					}
				}
				unk_0x94D4C393A9825924(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				unk_0x4D7D93C6E0C1063B(*iParam0, Var2.f_88);
				unk_0xDAA5C9C59AF4D4EB(*iParam0, Var2.f_87);
				unk_0x7F254E8C9247E923(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				unk_0x9D1E2B17CE94D0B9(*iParam0, 2, unk_0xC80D31E4B587871C(Var2.f_92, 28));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 3, unk_0xC80D31E4B587871C(Var2.f_92, 29));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 0, unk_0xC80D31E4B587871C(Var2.f_92, 30));
				unk_0x9D1E2B17CE94D0B9(*iParam0, 1, unk_0xC80D31E4B587871C(Var2.f_92, 31));
				if (unk_0xAFB4F670EC043D01(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					unk_0xC7BF27112709A906(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(*iParam0)))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								unk_0xC195F0A7CE73E810(*iParam0, Var2.f_90);
							}
						}
						else
						{
							unk_0xC195F0A7CE73E810(*iParam0, Var2.f_90);
						}
					}
				}
				func_319(iParam0, &(Var2.f_31), &(Var2.f_81));
				unk_0xC0E8D21B09ADD40A(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bagger") && !Global_104555.f_9055.f_99.f_58[118])
					{
						unk_0xE58BC5B025017AE2(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("bodhi2"))
					{
						func_353(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_104555.f_2353.f_539.f_4296) && Global_104555.f_9055.f_99.f_58[131]) && unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("tailgater"))
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 6, 1, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 14, 7, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 11, 2, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 2, 3, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 7, 5, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 0, 0, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 3, 3, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 13, 1, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 4, 3, false);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 12, 2, false);
					unk_0x4705D420368126DF(*iParam0, 22, true);
					unk_0xC195F0A7CE73E810(*iParam0, 2);
					unk_0xA9EF3F93CBFFF6D0(*iParam0, 23, 11, false);
					unk_0xDAA5C9C59AF4D4EB(*iParam0, 2);
					Global_104555.f_2353.f_539.f_4296 = 1;
					func_325(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x14776E43F90DD454(Var2);
				}
				if (bVar5)
				{
					func_352(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_325(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2DFF8
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_89(iParam0) && unk_0x6ADD12BF4D6D2587(*iParam1)) && unk_0xB8DE76287EDC4957(*iParam1, 0))
	{
		if (iParam2 > Global_104555.f_2353.f_539.f_2387)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_107(*iParam1, iParam0);
		}
		if (unk_0x96E226626970ABA3(*iParam1) != 0)
		{
			unk_0xA0A6811A3E4062D1(*iParam1, 0);
		}
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/] = unk_0x82FF3DFBC3965CC0(*iParam1);
		if (unk_0xFCCAE5538E490D17(*iParam1, &iVar1))
		{
			Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x82FF3DFBC3965CC0(iVar1);
		}
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xBED420B2B3B64B88(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xDE523AF6F7B269AB(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x7C7056D6F2A31BF6(*iParam1, 1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x7C7056D6F2A31BF6(*iParam1, 2);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x7C7056D6F2A31BF6(*iParam1, 3);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x7C7056D6F2A31BF6(*iParam1, 4);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x7C7056D6F2A31BF6(*iParam1, 5);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x7C7056D6F2A31BF6(*iParam1, 6);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x7C7056D6F2A31BF6(*iParam1, 7);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x7C7056D6F2A31BF6(*iParam1, 8);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x7C7056D6F2A31BF6(*iParam1, 9);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x7C7056D6F2A31BF6(*iParam1, 10);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x7C7056D6F2A31BF6(*iParam1, 11);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x7C7056D6F2A31BF6(*iParam1, 12);
		if (unk_0x965BEFCC45024E92(*iParam1, 0))
		{
			iVar2 = unk_0xBFAC036AADDA5F9F(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x832CFDD4BD296987();
		StringCopy(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0xF2D2D6860D636A58(*iParam1), 16);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0xBB95820E68A4EB0D(*iParam1);
		unk_0xAEC96F2E5A91C606(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x0DA0B030029E4E6E(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x7869E6E4E193E666(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x84EE59E8804FCC8C(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x55F371CF3DB9BFA1(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x7E3C3BFAB9ADD960(*iParam1);
		Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x0260F35A831D6738(*iParam1);
		unk_0x063C5BF33FA1D85E(*iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x378B727FB0126407(*iParam1, 2))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x378B727FB0126407(*iParam1, 3))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x378B727FB0126407(*iParam1, 0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x378B727FB0126407(*iParam1, 1))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_104555.f_2353.f_539.f_4297[iParam0] = 10;
		if (unk_0x027824FEED96D97E(*iParam1) >= 0 && func_329(*iParam1, 0, &uVar0))
		{
			func_110(iParam1, &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_104555.f_20088[iParam0 /*43*/].f_40 = 1;
				Global_104555.f_20088[iParam0 /*43*/] = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/];
				Global_104555.f_20088[iParam0 /*43*/].f_3 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_104555.f_20088[iParam0 /*43*/].f_4 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_104555.f_20088[iParam0 /*43*/].f_5 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_104555.f_20088[iParam0 /*43*/].f_6 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_104555.f_20088[iParam0 /*43*/].f_10 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_104555.f_20088[iParam0 /*43*/].f_16 = !Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_104555.f_20088[iParam0 /*43*/].f_19 = { Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_104555.f_20088[iParam0 /*43*/].f_23 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_104555.f_20088[iParam0 /*43*/].f_7 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_104555.f_20088[iParam0 /*43*/].f_8 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_104555.f_20088[iParam0 /*43*/].f_9 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_104555.f_20088[iParam0 /*43*/].f_11 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_104555.f_20088[iParam0 /*43*/].f_12 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_104555.f_20088[iParam0 /*43*/].f_13 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_104555.f_20088[iParam0 /*43*/].f_14 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_104555.f_20088[iParam0 /*43*/].f_15 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_104555.f_20088[iParam0 /*43*/].f_18 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_104555.f_20088[iParam0 /*43*/].f_17 = Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_104555.f_20088[iParam0 /*43*/].f_24 = unk_0x2E9AFFEE33324CC8(*iParam1, 11) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_25 = unk_0x2E9AFFEE33324CC8(*iParam1, 12) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_26 = unk_0x2E9AFFEE33324CC8(*iParam1, 4) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_27 = unk_0x2E9AFFEE33324CC8(*iParam1, 23) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_28 = unk_0x2E9AFFEE33324CC8(*iParam1, 14) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_29 = unk_0x2E9AFFEE33324CC8(*iParam1, 16) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_30 = unk_0x2E9AFFEE33324CC8(*iParam1, 15) + 1;
				Global_104555.f_20088[iParam0 /*43*/].f_32 = unk_0xBDFD82385482D433(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[0] = unk_0xDAAE9CE720D2EF80(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[1] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 0);
				Global_104555.f_20088[iParam0 /*43*/].f_33[2] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[3] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 2);
				Global_104555.f_20088[iParam0 /*43*/].f_33[4] = unk_0xF4BBBDC1B6F914DB(*iParam1, 14, 3);
				Global_104555.f_20088[iParam0 /*43*/].f_39 = unk_0x6F73320EB7AD4866(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_31 = func_328(*iParam1);
				Global_104555.f_20088[iParam0 /*43*/].f_33[0] = unk_0x2F6FCAD69B2E4C34(*iParam1);
				unk_0xC3F97DDED7F36247(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_326(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_104555.f_20088[iParam0 /*43*/].f_1));
				unk_0x6E097DBC9C867CBD(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_326(Global_104555.f_2353.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_104555.f_20088[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_326(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x2EC0C
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_327(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_327(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x2EC7F
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_328(int iParam0)//Position - 0x30173
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0x027824FEED96D97E(iParam0) >= 0)
	{
		if (unk_0x6F73320EB7AD4866(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x6F73320EB7AD4866(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x6F73320EB7AD4866(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x6F73320EB7AD4866(iParam0) == 0)
		{
			if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (system::to_float(iVar5) / system::to_float(iVar4));
	return fVar6;
}

int func_329(int iParam0, bool bParam1, var uParam2)//Position - 0x30223
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	if ((!func_350(iVar0, bParam1, uParam2) && !func_349(unk_0x9EB17624F44A8DA4())) && !func_335(iParam0))
	{
		return 0;
	}
	if (func_349(unk_0x9EB17624F44A8DA4()))
	{
		if (func_334(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_330(unk_0x9EB17624F44A8DA4()) && (unk_0xF9DDB1C0875FD9E0(iVar0) || unk_0x849A8CFD71854E02(iVar0)))
	{
		bVar1 = true;
	}
	if ((((((unk_0x8F1CCD9A61E026D8(iParam0) && unk_0x82FF3DFBC3965CC0(iParam0) != -32236122) && unk_0x82FF3DFBC3965CC0(iParam0) != 177270108) && unk_0x82FF3DFBC3965CC0(iParam0) != 387748548) && unk_0x82FF3DFBC3965CC0(iParam0) != 1502869817) && unk_0x82FF3DFBC3965CC0(iParam0) != -1881846085) && !bVar1)
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x3A711520F83BAE98())
	{
		if ((func_454(iParam0) && unk_0x82FF3DFBC3965CC0(iParam0) != joaat("sentinel2")) && unk_0x82FF3DFBC3965CC0(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_330(int iParam0)//Position - 0x30383
{
	if (iParam0 != func_333())
	{
		if (func_332(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_331(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_331(int iParam0)//Position - 0x303C9
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

int func_332(int iParam0, bool bParam1, bool bParam2)//Position - 0x3068D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_333()//Position - 0x306D7
{
	return -1;
}

int func_334(int iParam0)//Position - 0x306E0
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_335(int iParam0)//Position - 0x30715
{
	if (func_348(unk_0x9EB17624F44A8DA4()) || func_347(unk_0x9EB17624F44A8DA4()))
	{
		if (func_336(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0)//Position - 0x30744
{
	if ((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	if (func_339(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Vehicle"))
	{
		if (unk_0x2786E663D1846FFC(iParam0, "Player_Vehicle") == unk_0xDFD4F88AAFDE2371(unk_0x9EB17624F44A8DA4()))
		{
			if (func_337(iParam0))
			{
				return 1;
			}
			switch (unk_0x82FF3DFBC3965CC0(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_337(int iParam0)//Position - 0x307FB
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (func_338(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_338(int iParam0)//Position - 0x30831
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
			return 1;
			break;
	}
	return 0;
}

int func_339(int iParam0, bool bParam1)//Position - 0x3087E
{
	switch (unk_0x82FF3DFBC3965CC0(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_341(unk_0x82FF3DFBC3965CC0(iParam0), 0))
			{
				if (Global_2512808.f_289 == iParam0)
				{
					return 1;
				}
				else if (func_340(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_340(int iParam0)//Position - 0x308D9
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2436181.f_611[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_341(int iParam0, int iParam1)//Position - 0x30913
{
	if (iParam1 == 0)
	{
		if (func_323(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_346();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_13545)
			{
				return func_345();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_13546)
			{
				return func_345();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_13544)
			{
				return func_345();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_13547)
			{
				return func_345();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_13549)
			{
				return func_345();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_344();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_17990)
			{
				return func_343();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_17992)
			{
				return func_343();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_17996)
			{
				return func_343();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_17993)
			{
				return func_343();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18000)
			{
				return func_343();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_17998)
			{
				return func_343();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18003)
			{
				return func_343();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_19922)
			{
				return func_342();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_19923)
			{
				return func_342();
			}
			break;
	}
	return 0;
}

bool func_342()//Position - 0x30AF3
{
	return unk_0x21EA5D4DC72DE119(2067165443);
}

bool func_343()//Position - 0x30B04
{
	return unk_0x21EA5D4DC72DE119(-957277403);
}

bool func_344()//Position - 0x30B15
{
	return unk_0x21EA5D4DC72DE119(210122941);
}

bool func_345()//Position - 0x30B26
{
	return unk_0x21EA5D4DC72DE119(-1894522408);
}

bool func_346()//Position - 0x30B37
{
	return unk_0x21EA5D4DC72DE119(1630677557);
}

int func_347(int iParam0)//Position - 0x30B48
{
	if (iParam0 != func_333())
	{
		if (func_332(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_333())
			{
				return func_331(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_348(int iParam0)//Position - 0x30BA7
{
	if (iParam0 != func_333())
	{
		if (func_332(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_333())
			{
				return func_331(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_349(int iParam0)//Position - 0x30C07
{
	if (iParam0 != func_333())
	{
		if (func_332(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_331(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_350(int iParam0, bool bParam1, var uParam2)//Position - 0x30C4E
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_330(unk_0x9EB17624F44A8DA4()) && (unk_0xF9DDB1C0875FD9E0(iParam0) || unk_0x849A8CFD71854E02(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0xC1514CFCEC68CA4A(iParam0) && !unk_0x125CDF69FA6EF560(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (func_351(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_351(int iParam0)//Position - 0x31066
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_352(int iParam0, int iParam1)//Position - 0x3108F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			Global_90309[iVar0] = iParam0;
			Global_90319[iVar0] = iParam1;
			Global_90329[iVar0] = unk_0x82FF3DFBC3965CC0(iParam0);
			if (unk_0xC1514CFCEC68CA4A(Global_90329[iVar0]))
			{
				Global_90357[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90357[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_353(int iParam0)//Position - 0x31111
{
	if (!func_354(*iParam0))
	{
		unk_0x7B3133EBCD34B431(*iParam0, 5, !Global_104555.f_9055.f_99.f_58[119]);
	}
}

bool func_354(int iParam0)//Position - 0x3113C
{
	return unk_0x7C7056D6F2A31BF6(iParam0, 5);
}

void func_355(int iParam0, var uParam1, int iParam2)//Position - 0x3114B
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104555.f_9055.f_99.f_58[128] && !Global_104555.f_9055.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104555.f_9055.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104555.f_9055.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_356()//Position - 0x313A7
{
	bool bVar0;
	struct<6> Var1;
	
	if ((((!unk_0x88DDBE9908752BF0(iLocal_89, 0) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && system::vdist2(unk_0xB3328BA8976B416C(iLocal_89, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 225f) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_89, 15f, 15f, 1f, 0, 1, 0)) && !func_358())
	{
		bVar0 = true;
	}
	if (((unk_0xB8DE76287EDC4957(iLocal_95, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_95, 0)) && unk_0xA8D0477084E86A92(iLocal_89, iLocal_95, 0)) && !func_358())
	{
		bVar0 = true;
	}
	if (!iLocal_588)
	{
		if ((unk_0xB8DE76287EDC4957(iLocal_95, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_95, 0)) && unk_0xA8D0477084E86A92(iLocal_89, iLocal_95, 0))
		{
			if (iLocal_586 == 0)
			{
				if (unk_0x74C475EB8E73D398(unk_0xC45B242943C8D6AD(unk_0x832CFDD4BD296987()), "RADIO_01_CLASS_ROCK"))
				{
					fLocal_150 = (fLocal_150 + unk_0x46C19C2753391FBF());
				}
				if (fLocal_150 > 7f)
				{
					iLocal_588 = 1;
				}
			}
			else if (iLocal_586 == 4)
			{
				if (unk_0x832CFDD4BD296987() != 8)
				{
					iLocal_586++;
					iLocal_588 = 1;
				}
			}
		}
	}
	else if ((!unk_0xB8DE76287EDC4957(iLocal_95, 0) || (unk_0xB8DE76287EDC4957(iLocal_95, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_95, 0))) || (unk_0xB8DE76287EDC4957(iLocal_95, 0) && !unk_0xA8D0477084E86A92(iLocal_89, iLocal_95, 0)))
	{
		iLocal_588 = 0;
	}
	if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_89, 1)) < 15f)
	{
		if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
			{
				if (!iLocal_589)
				{
					if ((unk_0x53C562FD2B9E3AB0() - iLocal_168) > 7500)
					{
						iLocal_589 = 1;
						bVar0 = false;
					}
				}
			}
		}
	}
	if (iLocal_589)
	{
		bVar0 = false;
		if (!func_171())
		{
			func_196(iLocal_88, "GENERIC_SHOCKED_MED", "Jimmy", 3);
			iLocal_169 = unk_0x53C562FD2B9E3AB0();
			iLocal_589 = 0;
		}
	}
	if (!iLocal_588)
	{
		if (iLocal_161 < 7 && !unk_0x74C475EB8E73D398(&Local_556, "FAM2_DRIV2"))
		{
			if ((unk_0xB8DE76287EDC4957(iLocal_95, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_95, 0)) && unk_0x317536BCEA8FA6B0(iLocal_95, -1, 0) == unk_0xFC1458A37D98B502())
			{
				if (unk_0x90D5DFB054818BA7(iLocal_95) > 30f)
				{
					if (unk_0x9A3C64A7BB4588B3(iLocal_95))
					{
						func_168();
						iLocal_555 = 0;
						iLocal_554 = 0;
						StringCopy(&Local_556, "", 24);
						iLocal_161 = 7;
					}
				}
				if ((Global_67999[5 /*9*/].f_1 - iLocal_587) > 3)
				{
					func_168();
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_161 = 7;
				}
			}
		}
		switch (iLocal_161)
		{
			case 0:
				if (func_157(&Local_549, cLocal_202, "FAM2_BEACH", 8, 0, 0, 0))
				{
					unk_0x1267474D9A69CA37(1f, 7f, 3);
					fLocal_150 = 0f;
					iLocal_587 = Global_67999[5 /*9*/].f_1;
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					iLocal_162 = unk_0x53C562FD2B9E3AB0();
					StringCopy(&Local_556, "", 24);
				}
				break;
			
			case 1:
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_162) > 2000)
				{
					if (!unk_0xA6DECE14FC9A8C51(iLocal_102))
					{
						iLocal_102 = func_209(vLocal_133, 0);
					}
					else if (!func_171())
					{
						func_150("FM2_BK2BIKE", 7500, 1);
						iLocal_162 = unk_0x53C562FD2B9E3AB0();
						iLocal_161++;
					}
				}
				break;
			
			case 2:
				if (((unk_0x53C562FD2B9E3AB0() - iLocal_162) > 2000 && unk_0x496616BFA56C89EB(203) == 0) || (unk_0x53C562FD2B9E3AB0() - iLocal_162) > 6000)
				{
					iLocal_161++;
				}
				break;
			
			case 3:
				if (func_207())
				{
					func_205("FAM2_WALK", bVar0);
				}
				else
				{
					func_205("FAM2_WALK2", bVar0);
				}
				if ((!func_171() && !iLocal_555) && iLocal_554)
				{
					fLocal_150 = 0f;
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_162 = unk_0x53C562FD2B9E3AB0();
				}
				break;
			
			case 4:
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_162) > 3000)
				{
					iLocal_161++;
				}
				break;
			
			case 5:
				if (func_207())
				{
					func_205("FAM2_DRIVB", bVar0);
				}
				else
				{
					func_205("FAM2_DRIVE", bVar0);
				}
				if ((!func_171() && !iLocal_555) && iLocal_554)
				{
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_162 = unk_0x53C562FD2B9E3AB0();
				}
				break;
			
			case 6:
				break;
			
			case 7:
				if (!unk_0x88DDBE9908752BF0(iLocal_89, 0) || !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					bVar0 = false;
				}
				func_205("FAM2_DRIV2", bVar0);
				if ((!func_171() && !iLocal_555) && iLocal_554)
				{
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
				}
				break;
		}
	}
	else
	{
		switch (iLocal_586)
		{
			case 0:
				if (func_171())
				{
					Local_556 = { func_170() };
					func_168();
					iLocal_555 = 1;
				}
				iLocal_586++;
				break;
			
			case 1:
				if (func_157(&Local_549, cLocal_202, "FAM2_JAZZ", 8, 0, 0, 0))
				{
					system::settimerb(0);
					iLocal_586++;
				}
				break;
			
			case 2:
				if (system::timerb() > 1000)
				{
					unk_0xE315C58FC2481E11(8);
					system::settimerb(0);
					iLocal_586++;
				}
				break;
			
			case 3:
				if (!func_171())
				{
					if (func_157(&Local_549, cLocal_202, "FAM2_JAZZ2", 8, 0, 0, 0))
					{
						system::settimerb(0);
						iLocal_586++;
					}
				}
				break;
			
			case 4:
				iLocal_588 = 0;
				break;
			
			case 5:
				if ((func_171() && !func_357("FAM2_JAZZ")) && !func_357("FAM2_JAZZ2"))
				{
					Var1 = { func_170() };
					if (!unk_0xAB019B170BF1309C(&Var1) && !unk_0x74C475EB8E73D398("NULL", &Var1))
					{
						Local_556 = { Var1 };
					}
					func_168();
					iLocal_555 = 1;
				}
				if (!func_171())
				{
					if (func_157(&Local_549, cLocal_202, "FAM2_JAZZ3", 8, 0, 0, 0))
					{
						system::settimerb(0);
						iLocal_586++;
					}
				}
				break;
			
			case 6:
				if (!func_171())
				{
					if (func_157(&Local_549, cLocal_202, "FAM2_JAZZ4", 8, 0, 0, 0))
					{
						system::settimerb(0);
						iLocal_586++;
					}
				}
				break;
			
			case 7:
				iLocal_588 = 0;
				break;
			}
	}
}

int func_357(char* sParam0)//Position - 0x319FD
{
	var uVar0;
	
	if (func_171())
	{
		MemCopy(&uVar0, {func_309()}, 4);
		if (unk_0x74C475EB8E73D398(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_358()//Position - 0x31A25
{
	return Global_92885.f_315 > 0;
}

void func_359()//Position - 0x31A36
{
	switch (iLocal_159)
	{
		case 0:
			unk_0xD4BB744A696E8ABF("SE_MICHAELS_HOUSE_RADIO", 0);
			iLocal_897 = 0;
			if (!unk_0x6C97EEC6339FB45C())
			{
				unk_0x393584863A2F304E("family_2_int", 8);
				iLocal_159 = -1;
			}
			else
			{
				iLocal_159++;
			}
			break;
		
		case -1:
			if (unk_0x8AD07B6FC24F47C4())
			{
				func_363("Michael", func_93(0), 32);
				iLocal_159 = 1;
			}
			break;
		
		case 1:
			if (func_193())
			{
				if (func_267("family_2_int"))
				{
					func_185(1, 1, 1, 0);
					if (!unk_0x6ADD12BF4D6D2587(iLocal_89))
					{
						unk_0x4982ECE0928DA13D(iLocal_89, "Jimmy", 2, func_99(14), 0);
					}
					else if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
					{
						unk_0x4982ECE0928DA13D(iLocal_89, "Jimmy", 0, 0, 0);
					}
					func_198(1);
					func_184();
					unk_0x3E80C2F7BC665259(1);
					unk_0xD0BFA95B279C174F(0);
					unk_0x0662098C9EF126B4(4);
					unk_0xFAC4E1A83A1073D9();
					iLocal_159++;
				}
				else
				{
					unk_0xA6C03E3E2533F8F3();
					iLocal_159 = 0;
				}
			}
			break;
		
		case 2:
			unk_0xFFFAC2063552BF4D("EXTRASUNNY");
			unk_0x84B0C18CA14830B4(0,1f);
			if (unk_0x6ADD12BF4D6D2587(iLocal_109))
			{
				unk_0x452336926718D62A(&iLocal_109);
				unk_0x143DCD09D82EE129(vLocal_514, 1f, joaat("v_ilev_mm_doorm_l"), 0);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_110))
			{
				unk_0x452336926718D62A(&iLocal_110);
				unk_0x143DCD09D82EE129(vLocal_515, 1f, joaat("v_ilev_mm_doorm_r"), 0);
			}
			if (unk_0x546F10CBA6C484DA(-2097039789))
			{
				unk_0x99B6EAC23065A02E(-2097039789, 0f, 0, 0);
				unk_0xB94AAB49E0BB01DB(-2097039789, 3, 0, 1);
			}
			if (unk_0x546F10CBA6C484DA(-2127416656))
			{
				unk_0x99B6EAC23065A02E(-2127416656, 0f, 0, 0);
				unk_0xB94AAB49E0BB01DB(-2127416656, 3, 0, 1);
			}
			unk_0xFCCDDE0E48CF9588("missfam2mcs_intp1");
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			if (unk_0x6ADD12BF4D6D2587(iLocal_109))
			{
				unk_0xBD1486160AB0661B(iLocal_109, -1000f, 1);
				unk_0x3A703774620FDB42(&iLocal_109);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_110))
			{
				unk_0xBD1486160AB0661B(iLocal_110, -1000f, 1);
				unk_0x3A703774620FDB42(&iLocal_110);
			}
			unk_0x2A3035DE2B139D39(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 300f);
			func_431(&Local_80, 0, 0, 2000, 1, 0, 0, 1);
			unk_0xD9A09B3208B810A7(unk_0xFC1458A37D98B502());
			iLocal_159++;
			break;
		
		case 3:
			if (!unk_0x6ADD12BF4D6D2587(iLocal_89))
			{
				if (unk_0x6ADD12BF4D6D2587(unk_0xA78D8DA2425CB3DB("Jimmy", 0)))
				{
					iLocal_89 = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("Jimmy", 0));
				}
			}
			if (unk_0xBBC745B9F75E27D0("Jimmy", 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
				{
					unk_0xBD8D47FDC6902B2D(iLocal_89, vLocal_122, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_89, fLocal_123);
					unk_0x31BBD48AA2503617(iLocal_89, -668482597, 1, 1, 0);
					unk_0xFB02C50CC0E93FAA(iLocal_89, sLocal_157, 0, 8, -1);
				}
			}
			if (unk_0xBBC745B9F75E27D0("Michael", 0) && unk_0x65E1868AA01313FF(0))
			{
				unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 0, 0, 0);
				unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
				unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 2000, 0, 1, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
				{
					func_96(iLocal_89);
				}
			}
			if (!iLocal_897)
			{
				if (unk_0x3E9CABD07B829173() && unk_0xCE083D214C9DBEF1())
				{
					system::settimera(0);
					if (unk_0x32C900DD9B686F75(vLocal_120, 30f, 2))
					{
						while (!unk_0x64D098EABB2F6F13() && system::timera() < 5000)
						{
							unk_0xAE83ED4C9081AE6F(0);
							system::wait(0);
						}
						unk_0x81BCCFFE3F019672();
						iLocal_897 = 1;
					}
				}
			}
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			if (!unk_0x6ADD12BF4D6D2587(iLocal_98))
			{
				if (func_362(0, 1, vLocal_126, 100f))
				{
					func_360(0, 1);
				}
				unk_0x4FB260623DD93924(0, 18, 1);
				func_324(&iLocal_98, 0, vLocal_126, fLocal_127, 1, 1);
			}
			if (!unk_0x6C97EEC6339FB45C())
			{
				func_185(0, 1, 1, 0);
				func_182();
				func_201(1);
				unk_0xBCBC53983EC3B1BA("FAMILY2", 0);
				unk_0xBCBC53983EC3B1BA(cLocal_202, 6);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
				{
					func_96(iLocal_89);
				}
				unk_0x61635C0A7950C875();
				if (unk_0x2C2E1E35924B9FF2(iLocal_113))
				{
					unk_0xA1451353A1AED1A5(iLocal_113);
				}
				uLocal_898 = unk_0x0B4BABF632AE674E(-809,962f, 170,919f, 75,7407f, 3f, "des_tvsmash");
				if (unk_0xCA61C7E425DAB6B3(uLocal_898))
				{
					unk_0xD0C906ABF8DD7B95(uLocal_898, 9);
				}
				if (unk_0x3E9CABD07B829173() || unk_0xCE083D214C9DBEF1())
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
					{
						unk_0xBD8D47FDC6902B2D(iLocal_89, vLocal_122, 1, false, 0, 1);
						unk_0x48ED7B2293A96722(iLocal_89, fLocal_123);
						unk_0x31BBD48AA2503617(iLocal_89, -668482597, 1, 1, 0);
						unk_0xFB02C50CC0E93FAA(iLocal_89, sLocal_157, 3, 0, -1);
					}
					system::wait(0);
					unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 1, 1, 0);
					unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 2000, 0, 1, 0);
				}
				func_434(24);
				unk_0xD4BB744A696E8ABF("SE_MICHAELS_HOUSE_RADIO", 1);
				unk_0xF0E859A5278D3AA0(false, 0);
				unk_0x59C3AC31C7544A28(500);
			}
			break;
	}
}

void func_360(int iParam0, int iParam1)//Position - 0x31EB1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (iParam0 == 145 || Global_90319[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == func_361(iParam0, iParam1))
				{
					if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_90309[iVar0], 0))
					{
						unk_0xDD29FF4BAB8AFF9C(Global_90309[iVar0], false, 1);
						unk_0xC91FE17AD7353B70(&(Global_90309[iVar0]));
						Global_90319[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_361(int iParam0, int iParam1)//Position - 0x31F4F
{
	struct<82> Var0;
	
	if (func_89(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_355(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_362(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x31F91
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	
	if (!func_89(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar2 = 0;
	func_355(iParam0, &Var1, iParam1);
	iVar2 = Var1;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]) && unk_0xB8DE76287EDC4957(Global_90309[iVar0], 0))
			{
				if (unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == iVar2 && Global_90319[iVar0] == iParam0)
				{
					if (fParam3 == -1f || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(Global_90309[iVar0], 0), vParam2, true) <= fParam3)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_363(char* sParam0, int iParam1, int iParam2)//Position - 0x32056
{
	int iVar0;
	struct<14> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	
	uVar2 = 9;
	uVar8 = { func_367(iParam1, iParam2) };
	iVar9 = 0;
	if (uVar8[2] == -99 && uVar8[0] == -99)
	{
		iVar9 = 1;
	}
	iVar6 = 0;
	while (iVar6 <= 14)
	{
		iVar0 = iVar6;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar2 = { func_364(iParam1, uVar8[iVar6]) };
				iVar7 = 0;
				while (iVar7 <= 8)
				{
					iVar3 = iVar7;
					iVar4 = func_28(iVar3);
					iVar5 = func_11(iVar4);
					if (uVar2[iVar7] != iVar5)
					{
						Var1 = { func_14(iParam1, 14, uVar2[iVar7]) };
						unk_0x7B9E2A8E7B7BA218(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar7++;
				}
			}
			else
			{
				Var1 = { func_14(iParam1, iVar0, uVar8[iVar6]) };
				if (((iVar6 == 2 || iVar6 == 0) && iVar9) || uVar8[iVar6] == -99)
				{
					Var1.f_3 = Global_104555.f_2353.f_539[Var1.f_5 /*65*/].f_13[iVar6];
					Var1.f_4 = Global_104555.f_2353.f_539[Var1.f_5 /*65*/][iVar6];
				}
				unk_0xEDB61F1ADC509416(sParam0, func_9(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar6++;
	}
}

struct<10> func_364(int iParam0, int iParam1)//Position - 0x321B3
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_366(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_366(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_366(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_366(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_366(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_366(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_366(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_366(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_366(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_366(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_366(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_365(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_366(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_366(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_366(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_366(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_366(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_366(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_366(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_366(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_366(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_366(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_365(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_366(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_366(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_366(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_366(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_366(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_366(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_366(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_366(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_366(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_366(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_365(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_366(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_366(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_366(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_366(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_366(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_366(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_366(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_366(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_366(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_366(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_366(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_366(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_366(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_366(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_366(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_366(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_366(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_366(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_366(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_366(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_366(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_366(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_366(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_366(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_366(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_366(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_365(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_366(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_366(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_366(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_366(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_366(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_366(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_366(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_366(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_366(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_366(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_366(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_366(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_366(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_366(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_366(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_366(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_366(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_366(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_366(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_366(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_366(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_366(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_366(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_366(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_366(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_365(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_365(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32AE2
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x060EBC19DD9EF446(iParam2, &Var1);
		if (!unk_0x42683C90F2D005ED(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0xDF7B1D9AE5581C01(Var1.f_1, iVar3, &vVar2) && vVar2.z != -1)
				{
					if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_7(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != -1)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x32C0C
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_367(int iParam0, int iParam1)//Position - 0x32C54
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_104555.f_9055.f_99.f_58[120])
					{
						func_369(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_369(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_369(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_369(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_369(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_369(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_369(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[0], Global_104555.f_2353.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_369(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_369(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_369(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_369(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_369(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_369(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_369(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_369(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_369(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_369(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_369(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_369(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_369(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_369(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_369(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_369(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_369(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_369(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_369(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_369(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_369(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_369(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_369(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_369(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_369(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_369(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_369(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_369(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_369(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_369(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_369(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_369(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_369(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_369(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_369(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_369(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_369(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_369(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_369(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_369(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_369(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_369(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_369(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_369(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_369(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_369(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_369(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_368(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_369(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_369(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_369(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[1], Global_104555.f_2353.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_369(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_369(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_369(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_369(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_369(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_369(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_369(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_369(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_369(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_369(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_369(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_369(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_369(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_369(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_369(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_369(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_369(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_369(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_369(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_369(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_369(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_369(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_369(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_369(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_369(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_369(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_369(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_369(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_369(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_369(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_369(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_369(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_369(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_369(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_369(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_369(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_369(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_369(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_369(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_369(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_369(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_369(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_369(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_369(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_368(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_369(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_369(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_369(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_369(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_369(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[2], Global_104555.f_2353.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_369(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_369(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_369(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_369(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_369(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_369(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_369(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_369(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_369(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_369(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_369(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_369(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_369(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_369(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_369(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_369(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_369(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_369(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_369(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_369(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_369(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_369(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_369(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_369(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_369(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_369(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_369(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_369(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_369(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_369(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_369(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_369(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_369(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_369(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_369(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_369(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_369(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_369(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_369(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_369(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_369(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_369(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_369(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_368(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_369(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_369(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_369(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_369(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_369(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_369(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_369(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_369(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_369(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_369(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_369(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_369(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_369(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_369(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_369(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_369(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_369(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_369(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_369(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_369(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_369(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_369(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_369(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_369(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_369(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_369(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_368(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_369(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_369(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_369(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_369(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_369(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_369(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_369(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_369(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_369(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_369(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_369(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_369(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_369(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_369(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_369(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_369(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_369(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_369(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_369(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_369(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_369(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_369(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_369(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_369(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_369(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_369(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_369(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_369(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_368(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_368(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34A9E
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x23A6BE673BD02B2D(iVar0, 0);
	unk_0x54F960113E1CDCA9((iParam2 - iParam3), &Var1);
	if (!unk_0x42683C90F2D005ED(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0x4D94EF46ACF845D4(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						unk_0x74B493EE892897A5(&Var3);
						unk_0xD1994E7F12547273(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_86(vVar2.z)] = vVar2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_86(vVar2.z)] = func_7(iParam1, vVar2.x, func_86(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != -1)
				{
					(*uParam0)[func_86(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

void func_369(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x34C88
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_370(bool bParam0, bool bParam1)//Position - 0x34CF9
{
	if (bParam0)
	{
		func_455(unk_0xFC1458A37D98B502(), 51);
		if (unk_0xE2C8F7DB3CF678AC(unk_0xFC1458A37D98B502()) || !bParam1)
		{
			func_371(unk_0xFC1458A37D98B502(), 12, 51, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			unk_0x3C442931F035583A(unk_0xFC1458A37D98B502());
			return 1;
		}
	}
	else
	{
		func_455(unk_0xFC1458A37D98B502(), 32);
		if (unk_0xE2C8F7DB3CF678AC(unk_0xFC1458A37D98B502()) || !bParam1)
		{
			func_371(unk_0xFC1458A37D98B502(), 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			unk_0x3C442931F035583A(unk_0xFC1458A37D98B502());
			return 1;
		}
	}
	return 0;
}

int func_371(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x34D8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (unk_0x3AB6A1A9084FB0A4(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_70669++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x82FF3DFBC3965CC0(iParam0);
	if (iParam5 == 0)
	{
		Global_70671[1 /*14*/] = { func_14(iVar10, iParam1, iParam2) };
		if (!func_398(iParam3))
		{
			Global_70669 = (Global_70669 - 1);
			return 0;
		}
		func_395(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_394(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_394(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_393(iParam0, 1);
			if (!func_392(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_393(iParam0, 0);
			if (!func_391(iVar10, 14, iVar8, -1) && !func_390(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_393(iParam0, 2);
			}
		}
		unk_0x945B0045DE0394EE(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_70714 };
		}
		else
		{
			uVar11 = { func_367(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_70671[1 /*14*/] = { func_14(iVar10, iVar0, uVar11[iVar0]) };
				if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_70731 };
						}
						else
						{
							uVar12 = { func_364(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_70671[1 /*14*/] = { func_14(iVar10, 14, uVar12[iVar1]) };
							func_387(iParam0, Global_70671[1 /*14*/].f_12, Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4);
							func_395(14);
							if (Global_70669 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_381(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_371(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_84(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x03924C68EFCBC511(iParam0, func_9(iVar0), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, unk_0x6AC6F0502D04B9F9(iParam0, func_9(iVar0)));
						}
						else
						{
							unk_0x03924C68EFCBC511(iParam0, func_9(iVar0), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, iParam4);
						}
						func_395(iVar0);
						if (Global_70669 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_381(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_371(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_70671[1 /*14*/] = { func_14(iVar10, iVar0, func_380(iParam0, iVar0, -1)) };
				if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_379(iParam0, iVar10, &iVar4, 1))
							{
								func_371(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_367(iVar10, 0) };
						func_371(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_14(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_377(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_371(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_377(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_371(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_377(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_371(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_377(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_371(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_377(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_371(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_364(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_70671[1 /*14*/] = { func_14(iVar10, 14, uVar15[iVar1]) };
			func_387(iParam0, Global_70671[1 /*14*/].f_12, Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4);
			func_395(14);
			if (Global_70669 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_381(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_371(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_387(iParam0, Global_70671[1 /*14*/].f_12, Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4);
		func_395(iParam1);
		if (Global_70669 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_381(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_371(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x03924C68EFCBC511(iParam0, func_9(iParam1), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, unk_0x6AC6F0502D04B9F9(iParam0, func_9(iParam1)));
		}
		else
		{
			unk_0x03924C68EFCBC511(iParam0, func_9(iParam1), Global_70671[1 /*14*/].f_3, Global_70671[1 /*14*/].f_4, iParam4);
		}
		if (Global_70669 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_381(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_371(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_374(iVar10, iParam1, iParam2);
		}
	}
	if (Global_70669 == 1)
	{
		if (func_379(iParam0, iVar10, &iVar4, 0))
		{
			func_371(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_372(iParam0, iVar10, &iVar4))
		{
			func_371(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_70669 = (Global_70669 - 1);
	return 1;
}

int func_372(int iParam0, int iParam1, int iParam2)//Position - 0x35598
{
	int iVar0;
	
	iVar0 = func_13(iParam1);
	if (Global_104555.f_2353.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_373(iParam0, Global_104555.f_2353.f_539[iVar0 /*65*/].f_64, Global_104555.f_2353.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_62;
			Global_104555.f_2353.f_539[iVar0 /*65*/].f_63 = -99;
			Global_104555.f_2353.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_373(int iParam0, int iParam1, int iParam2)//Position - 0x35624
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	Global_70671[1 /*14*/] = { func_14(iVar0, iParam1, iParam2) };
	if (!unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_367(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_373(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_364(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_373(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_70671[2 /*14*/] = { func_14(iVar0, 14, iVar4) };
									if (Global_70671[2 /*14*/].f_12 == iVar3)
									{
										if (func_373(iParam0, 14, iVar4))
										{
											if (!func_377(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_70671[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_394(iParam0, iVar2);
						Global_70671[2 /*14*/] = { func_14(iVar0, iVar2, iVar1) };
						if (!func_377(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_70671[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_364(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_373(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x742D2DEFFDC66EB8(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_3 && (unk_0xC563C871267881C4(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_4 || Global_70671[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_70671[1 /*14*/].f_3 == unk_0x4CDD2D1D66ED1DE4(iParam0, func_9(iParam1)) && Global_70671[1 /*14*/].f_4 == unk_0xDCC2BD4C56470D10(iParam0, func_9(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_374(int iParam0, int iParam1, int iParam2)//Position - 0x3587C
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_376(iParam0, 12, iVar0))
	{
		if (func_375(iParam0, iParam1, iParam2))
		{
			iVar1 = func_13(iParam0);
			if (iParam1 == 3)
			{
				Global_104555.f_2353.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_104555.f_2353.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_375(int iParam0, int iParam1, int iParam2)//Position - 0x35906
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_376(int iParam0, int iParam1, int iParam2)//Position - 0x359E4
{
	Global_70671[1 /*14*/] = { func_14(iParam0, iParam1, iParam2) };
	return unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 2);
}

int func_377(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x35A0E
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_364(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_378(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_392(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_391(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_390(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_392(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_391(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_390(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_392(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_391(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_390(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_378(int iParam0, int iParam1, int iParam2)//Position - 0x36012
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_379(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x360AB
{
	int iVar0;
	
	iVar0 = func_13(iParam1);
	if (Global_104555.f_2353.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_373(iParam0, Global_104555.f_2353.f_539[iVar0 /*65*/].f_61, Global_104555.f_2353.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_59;
			Global_104555.f_2353.f_539[iVar0 /*65*/].f_60 = -99;
			Global_104555.f_2353.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_380(int iParam0, int iParam1, int iParam2)//Position - 0x36141
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_373(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_373(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_393(iParam0, iParam2);
			}
		}
		else
		{
			return func_394(iParam0, iParam1);
		}
	}
	return -99;
}

int func_381(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x361E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_394(iParam0, 1);
				iVar0 = func_4(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_394(iParam0, 2);
				iVar0 = func_4(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_84(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_12(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_386(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_385(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_385(iParam0, 3, 135, 150))
									{
										iVar0 = func_384(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case 79:
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_385(iParam0, 3, 209, 222))
									{
										iVar0 = func_384(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_385(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_384(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_384(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_384(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_384(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_385(iParam0, 3, 176, 191) && !func_385(iParam0, 3, 227, 242))
									{
										iVar0 = func_384(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_394(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_394(iParam0, 11);
								iVar5 = func_383(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_394(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_382(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_394(iParam0, 8);
								iVar8 = func_394(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_383(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_383(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_394(iParam0, 11);
								iVar0 = func_383(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_382(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x36D95
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_383(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37079
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_384(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_384(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_384(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37340
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_376(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_385(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37377
{
	int iVar0;
	
	iVar0 = func_394(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0, int iParam1, int iParam2)//Position - 0x373A0
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

void func_387(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3766A
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x6057F5872C9EFA39(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0xAE01EF4BC84AFE7C(iParam0, 34, false);
			unk_0xAE01EF4BC84AFE7C(iParam0, 36, false);
		}
	}
	else
	{
		unk_0x0B652E456D6A7E32(iParam0, iParam1, iParam2, iParam3, unk_0x3A711520F83BAE98());
		if (iParam1 == 0)
		{
			iVar0 = func_5(iParam0, iParam2, iParam3, iParam1);
			if (func_388(unk_0x82FF3DFBC3965CC0(iParam0), 14, iVar0, unk_0xA2FAB7A15B84DCA2(iParam0, 0, iParam2, iParam3)))
			{
				unk_0xAE01EF4BC84AFE7C(iParam0, 34, true);
				unk_0xAE01EF4BC84AFE7C(iParam0, 36, true);
			}
			else
			{
				unk_0xAE01EF4BC84AFE7C(iParam0, 34, false);
				unk_0xAE01EF4BC84AFE7C(iParam0, 36, false);
			}
		}
	}
}

int func_388(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37702
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_389(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x6C297174CFC8C5B2(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_389(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x6C297174CFC8C5B2(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_389(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x377D0
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_10(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			unk_0x53CE22B0EDFAB540(iVar1, &Var0);
			if (!unk_0x42683C90F2D005ED(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_8(iParam0, func_9(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_70793.f_26[iParam2] && iParam1 == Global_70793[iParam2]) && Global_70793.f_13[iParam2] != 0)
		{
			return Global_70793.f_13[iParam2];
		}
		iVar9 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 0, -1, func_9(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			unk_0x19002A6D4CBCE1E2(iVar6, &Var5);
			if (!unk_0x42683C90F2D005ED(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_70793.f_13[iParam2] = Var5.f_1;
					Global_70793[iParam2] = iParam1;
					Global_70793.f_26[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_390(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3792C
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_389(iParam0, iParam2, 14, 3);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 1) || unk_0x6C297174CFC8C5B2(func_389(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_389(iParam0, iParam2, 1, 3);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(func_389(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_389(iParam0, iParam2, 14, 4);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 1) || unk_0x6C297174CFC8C5B2(func_389(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_389(iParam0, iParam2, 1, 4);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(func_389(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_391(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37BA9
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_389(iParam0, iParam2, 1, 3);
					}
					if (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_389(iParam0, iParam2, 1, 4);
					}
					if (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_392(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37FCE
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_389(iParam0, iParam2, 14, 3);
					}
					return unk_0x6C297174CFC8C5B2(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_389(iParam0, iParam2, 14, 4);
					}
					return unk_0x6C297174CFC8C5B2(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_393(int iParam0, int iParam1)//Position - 0x382C2
{
	int iVar0;
	int iVar1;
	
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_11(iParam1);
	}
	iVar1 = unk_0xC563C871267881C4(iParam0, iParam1);
	return func_5(iParam0, iVar0, iVar1, iParam1);
}

int func_394(int iParam0, int iParam1)//Position - 0x38308
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return -99;
	}
	iVar0 = func_9(iParam1);
	iVar1 = unk_0x4CDD2D1D66ED1DE4(iParam0, iVar0);
	iVar2 = unk_0xDCC2BD4C56470D10(iParam0, iVar0);
	return func_85(iParam0, iVar1, iVar2, iParam1);
}

void func_395(int iParam0)//Position - 0x38368
{
	if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 1) && !unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 6))
	{
		func_24(iParam0, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 2, Global_70671[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 1) && unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_396(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_396(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_396(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_396(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x38420
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_70668;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_26(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_20(iVar2, iVar0, 0);
		unk_0x872F1C1F8587CCC7(&iVar3, iVar1);
		func_397(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_397(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3846A
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_398(int iParam0)//Position - 0x3849A
{
	if (!unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_399()//Position - 0x384EB
{
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (unk_0xE8C126B7ADBB9D63(0, 18) || unk_0xE8C126B7ADBB9D63(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_400(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x3851D
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_430();
			iVar5 = func_430();
			func_429(&iVar5, iParam0);
			func_428(&iVar5, iParam1);
			func_427(&iVar5, 0);
			if (func_425(*uParam4, iVar5))
			{
				func_420(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_417(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_410((system::to_float(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0x633236B25E1A5942(0,6f);
				unk_0xD55F04EF19C13160(0);
				unk_0x0AD5B4F1F90CE447(0);
			}
			func_409();
			uParam4->f_10 = unk_0xD0CA83418A236CB4();
			unk_0x4AFBCBFDE748D4E0(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xE859EF37EA7362D3("TOD_SHIFT_SCENE");
			func_408();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0x8EA3C8E091EA5BA4(uParam4->f_4) && unk_0xCED06F4C77332FC6(uParam4->f_4)) || !(fParam5 >= 0,99f || fParam5 == -1f))
			{
				if (unk_0x8EA3C8E091EA5BA4(uParam4->f_4) && unk_0xCED06F4C77332FC6(uParam4->f_4))
				{
					fVar0 = unk_0x08EF81FC0762478A(uParam4->f_4);
				}
				else if (!(fParam5 >= 0,99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0,5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x8B948C59217A295D(sParam2) != 0)
						{
							unk_0xD941F8E30D7231AD(sParam2, fParam8);
						}
						if (unk_0x8B948C59217A295D(sParam3) != 0)
						{
							unk_0x7E674434FF907A39();
							unk_0xC11C778BD74C52F2(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0,99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_420(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0x7FF44F2CA1AA5702(func_407(iVar5), func_406(iVar5), func_405(iVar5));
				if (bParam7)
				{
					unk_0x7B2E201667AAB144();
				}
				unk_0x0B9D04994D02CC2F(uParam4->f_10);
				unk_0x751FF861325F816B("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x0AD5B4F1F90CE447(1);
					unk_0xD55F04EF19C13160(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0,1f;
			fVar10 = 0,9f;
			fVar12 = func_235(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = system::round((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_420(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0x7FF44F2CA1AA5702(func_407(iVar5), func_406(iVar5), func_405(iVar5));
			if (func_404(iVar5) != unk_0xD3ECC7A5C90D3AA4())
			{
				unk_0x4823DE67A74DCD67(func_404(iVar5), func_403(iVar5), func_401(iVar5));
			}
			func_177();
			unk_0x283AC66D956F6B0E(6);
			break;
	}
	return 0;
}

int func_401(int iParam0)//Position - 0x387B0
{
	return (system::shift_right(iParam0, 26) & 31 * func_402(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_402(bool bParam0, int iParam1, int iParam2)//Position - 0x387D5
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_403(int iParam0)//Position - 0x387EC
{
	return iParam0 & 15;
}

int func_404(int iParam0)//Position - 0x387F9
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_405(int iParam0)//Position - 0x3880B
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_406(int iParam0)//Position - 0x3881E
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_407(int iParam0)//Position - 0x38831
{
	return system::shift_right(iParam0, 9) & 31;
}

void func_408()//Position - 0x38844
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x4B1D93E1A14A667F(Global_104555.f_14111[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_409()//Position - 0x38870
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 0;
	}
	unk_0xDFC63F22B454FFF5(iVar0, "OFF");
	return 1;
}

void func_410(float fParam0)//Position - 0x388BE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_416(&(Global_104555.f_18073.f_175[iVar0 /*19*/].f_5)))
		{
			func_411(&(Global_104555.f_18073.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_416(&(Global_104555.f_18073.f_362[iVar1 /*3*/])))
		{
			func_411(&(Global_104555.f_18073.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x6E21EFDC4146D718();
}

void func_411(int iParam0, float fParam1)//Position - 0x3894F
{
	if (func_416(iParam0))
	{
		func_412(iParam0, (func_414(iParam0) + fParam1));
	}
}

void func_412(int iParam0, float fParam1)//Position - 0x38972
{
	iParam0->f_1 = (func_413(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_413(bool bParam0)//Position - 0x389A0
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = system::to_float(unk_0x53C562FD2B9E3AB0());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		iVar2 = unk_0xD1952A425B78FFC0();
		fVar3 = system::to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (system::to_float(unk_0x53C562FD2B9E3AB0()) / 1000f);
}

float func_414(var uParam0)//Position - 0x389F8
{
	if (func_416(uParam0))
	{
		if (func_415(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_413(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_415(var uParam0)//Position - 0x38A37
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

bool func_416(var uParam0)//Position - 0x38A47
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

void func_417(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x38A57
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_425(iParam0, iParam1))
	{
		iVar0 = func_403(iParam1);
		iVar1 = func_401(iParam0);
		iVar2 = (func_401(iParam0) - func_401(iParam1));
		iVar3 = (func_403(iParam0) - func_403(iParam1));
		iVar4 = (func_404(iParam0) - func_404(iParam1));
		iVar5 = (func_407(iParam0) - func_407(iParam1));
		iVar6 = (func_406(iParam0) - func_406(iParam1));
		iVar7 = (func_405(iParam0) - func_405(iParam1));
	}
	else
	{
		iVar0 = func_403(iParam0);
		iVar1 = func_401(iParam1);
		iVar2 = (func_401(iParam1) - func_401(iParam0));
		iVar3 = (func_403(iParam1) - func_403(iParam0));
		iVar4 = (func_404(iParam1) - func_404(iParam0));
		iVar5 = (func_407(iParam1) - func_407(iParam0));
		iVar6 = (func_406(iParam1) - func_406(iParam0));
		iVar7 = (func_405(iParam1) - func_405(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_419(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_418(system::to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_418(float fParam0, float fParam1, float fParam2)//Position - 0x38C58
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(system::round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_419(int iParam0, int iParam1)//Position - 0x38C9A
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_420(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x38D3C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_401(*iParam0);
	iVar1 = func_403(*iParam0);
	iVar2 = func_404(*iParam0);
	iVar3 = func_407(*iParam0);
	iVar4 = func_406(*iParam0);
	iVar5 = func_405(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_419(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_419(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_421(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_421(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x38EBE
{
	func_427(uParam0, iParam1);
	func_428(uParam0, iParam2);
	func_429(uParam0, iParam3);
	func_424(uParam0, iParam5);
	func_423(uParam0, iParam4);
	func_422(uParam0, iParam6);
}

void func_422(var uParam0, int iParam1)//Position - 0x38EF6
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || system::shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || system::shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_423(var uParam0, int iParam1)//Position - 0x38F7C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_403(*uParam0);
	iVar1 = func_401(*uParam0);
	if (iParam1 < 1 || iParam1 > func_419(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_424(var uParam0, int iParam1)//Position - 0x38FCD
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_425(int iParam0, int iParam1)//Position - 0x39000
{
	int iVar0;
	int iVar1;
	
	if (!func_426(iParam1) || !func_426(iParam0))
	{
		return 1;
	}
	iVar0 = func_401(iParam0);
	iVar1 = func_401(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_403(iParam0);
	iVar1 = func_403(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_404(iParam0);
	iVar1 = func_404(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_407(iParam0);
	iVar1 = func_407(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_406(iParam0);
	iVar1 = func_406(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_405(iParam0);
	iVar1 = func_405(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_426(int iParam0)//Position - 0x3910C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_405(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_406(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_407(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_401(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_403(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_404(iParam0);
	if (iVar5 < 1 || iVar5 > func_419(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_427(var uParam0, int iParam1)//Position - 0x391E8
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

void func_428(var uParam0, int iParam1)//Position - 0x39224
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_429(var uParam0, int iParam1)//Position - 0x3925F
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

var func_430()//Position - 0x39299
{
	var uVar0;
	
	func_427(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_428(&uVar0, unk_0x95327550F0F2BE7C());
	func_429(&uVar0, unk_0x674C9438180770FE());
	func_423(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_424(&uVar0, unk_0xEAF455949B108589());
	func_422(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_431(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x392DF
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()), 64);
	}
	if (!unk_0xA8113D347D14630F())
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x6EC874A9FE87276C(unk_0xFC1458A37D98B502(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x90CE99E954B80CFF(0, 0, 3, 0);
	}
	else
	{
		unk_0x3458550DF8E9B453(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x3E80C2F7BC665259(1);
	}
	else
	{
		if (unk_0x8EA3C8E091EA5BA4(uParam0->f_4))
		{
			if (unk_0xD85097DDDA5447BE(uParam0->f_4))
			{
				unk_0x7849794435F39D49(uParam0->f_4, false);
			}
			unk_0x02934BABFD4CD384(uParam0->f_4, 1);
		}
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), true, 0);
		}
		iVar0 = unk_0xC733212BF9066BDF();
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			unk_0xB3A8974D2C811672(iVar0, true, 0);
		}
		unk_0x751FF861325F816B("TIME_LAPSE");
		if (unk_0x771D0F8F56A5FE6C("TOD_SHIFT_SCENE"))
		{
			unk_0x0B9D04994D02CC2F(uParam0->f_10);
			unk_0x751FF861325F816B("TIME_LAPSE");
			unk_0xE02E32C69260FBB7("TOD_SHIFT_SCENE");
		}
	}
	func_185(bParam1, 1, 0, 0);
	func_408();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x7FF44F2CA1AA5702(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x7FF44F2CA1AA5702(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x3E9CABD07B829173())
		{
			unk_0x59C3AC31C7544A28(250);
		}
	}
	if (!bParam1)
	{
		if (Global_104555.f_32429.f_4801 != -15)
		{
			Global_104555.f_32429.f_4801 = func_430();
		}
	}
}

void func_432(int iParam0)//Position - 0x3944E
{
	if (!unk_0x3E9CABD07B829173())
	{
		unk_0xAE83ED4C9081AE6F(iParam0);
		while (!unk_0x3E9CABD07B829173())
		{
			system::wait(0);
		}
	}
}

int func_433(int iParam0)//Position - 0x39474
{
	if (unk_0x9F7B586A14398C40())
	{
		if ((unk_0x53C562FD2B9E3AB0() - Global_28) > iParam0)
		{
			Global_27 = unk_0x53C562FD2B9E3AB0();
		}
		Global_28 = unk_0x53C562FD2B9E3AB0();
		if ((unk_0x53C562FD2B9E3AB0() - Global_27) > iParam0)
		{
			if (func_399())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

void func_434(int iParam0)//Position - 0x394BE
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_69678[iParam0] = 0;
	Global_69678.f_69[iParam0] = 0;
}

void func_435(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x394E3
{
	struct<60> Var0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[25]) && unk_0xB8DE76287EDC4957(Global_69678.f_484[25], 0))
			{
				if (Global_69678.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x8F1CCD9A61E026D8(iParam0) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("bus")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_445(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_108(iParam0, &Var0);
		if (func_105(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			fParam2 = unk_0xF0371FE6E2BF9599(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) != joaat("vehicle_gen_controller"))
			{
				Global_70666 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
			}
		}
		func_439(iParam3, &Var0, vParam1, fParam2, func_446(iParam0));
		func_436(iParam3, iParam0, 0);
	}
}

void func_436(int iParam0, int iParam1, int iParam2)//Position - 0x3960C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_438(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 12) && !unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69678.f_555[0 /*21*/].f_4 != unk_0x82FF3DFBC3965CC0(iParam1))
		{
			return;
		}
	}
	if (Global_70585 != -1 && Global_70585 != iParam0)
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			if (!unk_0x9761C10D57B68069(iParam1))
			{
				unk_0xDD29FF4BAB8AFF9C(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_104555.f_32429.f_4801 = func_430();
			}
			if (iParam1 != Global_69678.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_437(iParam0);
					if ((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) && iParam1 != iVar0)
					{
						func_107(iVar0, 145);
					}
				}
				Global_70584 = iParam1;
				Global_70585 = iParam0;
				Global_70586 = iParam2;
			}
		}
	}
}

int func_437(int iParam0)//Position - 0x39729
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69678.f_139[iParam0];
}

int func_438(var uParam0, int iParam1)//Position - 0x39745
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_361(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_361(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_361(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_361(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_361(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_361(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_361(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_361(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_361(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 11);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 11);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 9);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 9);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("trash");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = 1938952078;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_123())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_123())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104555.f_32429.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_105(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104555.f_32429.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104555.f_32429.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_9, 19))
	{
		if (!func_105(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_9, 20))
	{
		if (!func_105(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_439(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x3AE3C
{
	if (func_438(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
		{
			func_444(iParam0);
			func_443(uParam1, &(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 11))
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_440(iParam0, 1);
		}
	}
}

void func_440(int iParam0, bool bParam1)//Position - 0x3AF3B
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_442(iParam0, 0))
		{
			func_441(iParam0, 1, 0);
			func_441(iParam0, 2, 0);
			func_441(iParam0, 3, 0);
			func_441(iParam0, 4, 0);
			func_441(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_441(iParam0, 0, 0);
	}
}

void func_441(int iParam0, int iParam1, bool bParam2)//Position - 0x3AF98
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_32429[iParam0]), iParam1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_32429[iParam0]), iParam1);
	}
}

bool func_442(int iParam0, int iParam1)//Position - 0x3AFD3
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_443(var uParam0, var uParam1)//Position - 0x3AFF6
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_444(int iParam0)//Position - 0x3B0C2
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_438(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
			unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
			Global_69678.f_139[iParam0] = 0;
		}
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			func_440(iParam0, 0);
		}
	}
}

void func_445(int iParam0)//Position - 0x3B13C
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_444(iParam0);
	func_440(iParam0, 0);
}

int func_446(int iParam0)//Position - 0x3B163
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 145;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				return Global_90319[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_447(int iParam0)//Position - 0x3B1C6
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	unk_0x04FE252E98FAA4C3(iVar0, &vVar1, &vVar2);
	fVar3 = (-vVar1.z + vVar2.z);
	if (fVar3 < 2,6f)
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0, int iParam1, bool bParam2)//Position - 0x3B1FC
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_449(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xC80D31E4B587871C(Global_104555.f_7199[iVar2], 0))
		{
			if (unk_0x7840B5C83A85E7C6(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_449(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3B26D
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_450(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x3B345
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_438(&(Global_69678.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xBE3C4023003180FC(vParam0, Global_69678.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_451(iVar0);
			}
		}
		iVar0++;
	}
}

void func_451(int iParam0)//Position - 0x3B395
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_438(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xB8DE76287EDC4957(Global_69678.f_139[iParam0], 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_69678.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
				unk_0xC91FE17AD7353B70(&(Global_69678.f_139[iParam0]));
			}
		}
		Global_69678[iParam0] = 1;
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_442(iParam0, 0)) && Global_70587.f_66 == 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] != 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] > 3) && (!func_452(0, Global_69678.f_555[0 /*21*/].f_12) || !func_452(1, Global_69678.f_555[0 /*21*/].f_12)))
			{
				func_443(&(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]), &Global_70587);
				Global_70665 = Global_104555.f_32429.f_5591;
			}
			func_440(iParam0, 0);
		}
	}
}

int func_452(int iParam0, int iParam1)//Position - 0x3B507
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_453(&(Global_104555.f_32429.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_115(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_453(var uParam0)//Position - 0x3B579
{
	return *uParam0;
}

int func_454(int iParam0)//Position - 0x3B584
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90339[iVar0]))
		{
			if (Global_90339[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_455(int iParam0, int iParam1)//Position - 0x3B5BF
{
	int iVar0;
	struct<17> Var1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	Var1 = { func_367(iVar0, iParam1) };
	func_456(iParam0, iVar0, &Var1);
}

void func_456(int iParam0, int iParam1, var uParam2)//Position - 0x3B5E6
{
	int iVar0;
	struct<14> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Var1 = { func_14(iParam1, func_86(iVar0), (*uParam2)[func_86(iVar0)]) };
		if (Var1.f_3 != -1 && Var1.f_4 != -1)
		{
			unk_0x797EAF57A872C68A(iParam0, iVar0, Var1.f_3, Var1.f_4);
		}
		iVar0++;
	}
	uVar6 = { func_364(iParam1, (*uParam2)[13]) };
	iVar2 = 0;
	while (iVar2 <= 8)
	{
		iVar3 = iVar2;
		iVar4 = func_28(iVar3);
		iVar5 = func_11(iVar4);
		if (uVar6[iVar2] != iVar5)
		{
			Var1 = { func_14(iParam1, 14, uVar6[iVar2]) };
			if (Var1.f_3 != -1 && Var1.f_3 != 255)
			{
				unk_0x90E2821D9B0C8B36(iParam0, iVar4, Var1.f_3, Var1.f_4);
			}
		}
		iVar2++;
	}
}

void func_457(int iParam0)//Position - 0x3B6C0
{
	if (Global_89900 != -1)
	{
		if (iParam0 == Global_89900)
		{
			Global_89904 = 1;
			return;
		}
	}
}

int func_458(vector3 vParam0, float fParam1)//Position - 0x3B6E4
{
	switch (iLocal_565)
	{
		case 0:
			if (func_97(&iLocal_89, 14, -808,0422f, 168,5755f, 75,7504f, 244,0649f, 1))
			{
				iLocal_565++;
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
			{
				unk_0x797EAF57A872C68A(iLocal_89, 1, 0, 0);
				unk_0x797EAF57A872C68A(iLocal_89, 3, 0, 0);
				unk_0x797EAF57A872C68A(iLocal_89, 4, 0, 0);
				unk_0x797EAF57A872C68A(iLocal_89, 6, 0, 0);
				unk_0x797EAF57A872C68A(iLocal_89, 10, 0, 0);
				iLocal_565++;
			}
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
			{
				if (unk_0xE2C8F7DB3CF678AC(iLocal_89))
				{
					unk_0x03924C68EFCBC511(iLocal_89, 1, 0, 0, 0);
					unk_0x03924C68EFCBC511(iLocal_89, 3, 0, 0, 0);
					unk_0x03924C68EFCBC511(iLocal_89, 4, 0, 0, 0);
					unk_0x03924C68EFCBC511(iLocal_89, 6, 0, 0, 0);
					unk_0x03924C68EFCBC511(iLocal_89, 10, 0, 0, 0);
					unk_0x3C442931F035583A(iLocal_89);
					unk_0xBD8D47FDC6902B2D(iLocal_89, vParam0, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_89, fParam1);
					func_96(iLocal_89);
					unk_0x3C442931F035583A(iLocal_89);
					iLocal_565 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_459()//Position - 0x3B7F3
{
	if (!iLocal_582)
	{
		fLocal_573 = 0f;
		iLocal_574 = 0;
		iLocal_575 = 0;
		iLocal_576 = 0;
		iLocal_577 = 0;
		iLocal_578 = 0;
		iLocal_579 = 0;
		iLocal_580 = 0;
		iLocal_581 = 0;
		iLocal_582 = 1;
	}
	switch (iLocal_70)
	{
		case 1:
			if (unk_0x6ADD12BF4D6D2587(iLocal_95) && unk_0xB8DE76287EDC4957(iLocal_95, 0))
			{
				if (fLocal_573 > (IntToFloat(unk_0xDE523AF6F7B269AB(iLocal_95)) + unk_0xA7B0253B80B52B2B(iLocal_95)))
				{
					func_461(208, 1, 0);
				}
				fLocal_573 = (IntToFloat(unk_0xDE523AF6F7B269AB(iLocal_95)) + unk_0xA7B0253B80B52B2B(iLocal_95));
			}
			else
			{
				fLocal_573 = 0f;
			}
			break;
		
		case 2:
			if (!iLocal_577)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_93) && unk_0xB8DE76287EDC4957(iLocal_93, 0))
				{
					if (unk_0xB0DA749C8A7CCBBF(iLocal_93, joaat("tribike")))
					{
						func_461(214, 0, 1);
					}
					if (unk_0xB0DA749C8A7CCBBF(iLocal_93, joaat("bmx")))
					{
						func_461(214, 1, 1);
					}
					if (unk_0xB0DA749C8A7CCBBF(iLocal_93, joaat("cruiser")))
					{
						func_461(214, 2, 1);
					}
					if (unk_0xB0DA749C8A7CCBBF(iLocal_93, joaat("scorcher")))
					{
						func_461(214, 3, 1);
					}
					iLocal_577 = 1;
				}
			}
			break;
		
		case 3:
			if (!iLocal_575)
			{
				func_262(211, 0);
				iLocal_575 = 1;
			}
			else if (!iLocal_576)
			{
				if (iLocal_185)
				{
					func_460(0, -1);
					iLocal_576 = 1;
				}
			}
			if (unk_0xB8DE76287EDC4957(iLocal_93, 0))
			{
				if (!iLocal_574)
				{
					if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_93))
					{
						iLocal_574 = 1;
					}
				}
				else if (!unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_93))
				{
					if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
					{
						func_461(206, 1, 0);
					}
					iLocal_574 = 0;
				}
			}
			break;
		
		case 5:
			if (!iLocal_578)
			{
				func_262(207, 0);
				iLocal_578 = 1;
			}
			else if (!iLocal_579)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2022,824f, -1045,762f, 1,449759f, -2018,304f, -1032,236f, 4,478201f, 8f, 0, 1, 0))
				{
					func_460(0, -1);
					iLocal_579 = 1;
				}
			}
			break;
		
		case 7:
			if (!iLocal_580)
			{
				if (unk_0xA6DECE14FC9A8C51(iLocal_101[0]))
				{
					func_262(213, 0);
					iLocal_580 = 1;
				}
				break;
			}
			if (!iLocal_581)
			{
				if ((!unk_0x6ADD12BF4D6D2587(iLocal_100[0]) && !unk_0x6ADD12BF4D6D2587(iLocal_99[0])) || unk_0x3AB6A1A9084FB0A4(iLocal_100[0]))
				{
					func_460(0, -1);
					iLocal_581 = 1;
				}
			}
	}
}

void func_460(bool bParam0, int iParam1)//Position - 0x3BA47
{
	int iVar0;
	
	if (Global_55911)
	{
	}
	Global_55911 = 0;
	if (bParam0)
	{
		Global_55912 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67999[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_67999[iVar0 /*9*/] > 0)
			{
				if (Global_67999[iVar0 /*9*/] == iParam1)
				{
					Global_67999[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_461(int iParam0, int iParam1, bool bParam2)//Position - 0x3BAE1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (Global_67999[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67999[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67999[iVar0 /*9*/].f_1 = (Global_67999[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67999[iVar0 /*9*/] != -1)
	{
		if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67999[iVar0 /*9*/].f_1 > 1)
			{
				Global_67999[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67999[iVar0 /*9*/].f_1 < 0)
			{
				Global_67999[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_462()//Position - 0x3BB8B
{
	if (bLocal_154)
	{
		if (!unk_0xF491DD47B88AA84E())
		{
			if (unk_0x77D030AFE56BCCEB(unk_0x9EB17624F44A8DA4()) <= 5f)
			{
				if (!func_464(29))
				{
					func_238("AM_H_NOSTAM", -1);
					func_463(29);
				}
			}
		}
	}
}

void func_463(int iParam0)//Position - 0x3BBC7
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_20380.f_150[iVar1]), iVar0);
	}
}

int func_464(int iParam0)//Position - 0x3BC09
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_465()//Position - 0x3BC4C
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	func_472();
	if (!func_181())
	{
		if (iLocal_70 >= 4)
		{
			if (!unk_0xAB84FBE3AB3FFAD3("smboat"))
			{
				unk_0xBC469A15B0FBB2B3("smBoat");
			}
		}
		else if (unk_0xAB84FBE3AB3FFAD3("smboat"))
		{
			unk_0x990A0EC8D6FEA4BB("smBoat");
		}
	}
	switch (iLocal_70)
	{
		case 0:
			if (iLocal_173)
			{
				func_180(-803,2507f, 172,9356f, 71,8447f, 108,735f, 1);
				while (!func_370(0, 1))
				{
					system::wait(0);
				}
				unk_0x307EAE14C924E2E7(sLocal_157);
				while (!unk_0xC316B5E3E7ACF515(sLocal_157))
				{
					system::wait(0);
				}
				while (!unk_0x1A595E6882473810(unk_0xD3BB1A515B0A47F3(-803,2507f, 172,9356f, 71,8447f)))
				{
					system::wait(0);
				}
				func_195(&iLocal_89, 14, -809,6773f, 171,191f, 75,7409f, 138,7408f);
			}
			break;
		
		case 1:
			iLocal_203 = 0;
			iLocal_204 = 0;
			unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 0);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
			{
				func_96(iLocal_89);
			}
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			unk_0x5A5C7C96638EAA3E("Mansion_1");
			if (iLocal_173)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_95))
				{
					unk_0xC91FE17AD7353B70(&iLocal_95);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_97))
				{
					unk_0xC91FE17AD7353B70(&iLocal_97);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_98))
				{
					unk_0xC91FE17AD7353B70(&iLocal_98);
				}
				while (!func_324(&iLocal_98, 0, vLocal_126, fLocal_127, 1, 1))
				{
					system::wait(0);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_95, 0))
				{
					unk_0xFBA991D3A851E195(iLocal_95, 1);
				}
				while (!func_370(0, 1))
				{
					system::wait(0);
				}
				unk_0x307EAE14C924E2E7(sLocal_157);
				while (!unk_0xC316B5E3E7ACF515(sLocal_157))
				{
					system::wait(0);
				}
				func_180(vLocal_120, fLocal_121, 1);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
				{
					unk_0x957CEE967C939968(iLocal_89);
				}
				func_195(&iLocal_89, 14, vLocal_122, fLocal_123);
				bVar0 = false;
				while (!bVar0)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
					{
						if (unk_0xF0D051E82D0DB8C2(iLocal_89))
						{
							bVar0 = true;
						}
					}
					system::wait(0);
				}
				if (!func_181())
				{
					unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 0, 0, 0);
					unk_0x691491EBC2D892F5(unk_0xFC1458A37D98B502(), 1f);
				}
			}
			if (unk_0xB8DE76287EDC4957(iLocal_95, 0))
			{
				unk_0xACE486395AA1867D(iLocal_95, 1084227584);
				unk_0xB8D9F55BA414128D(iLocal_95, 0, 0f, 0f, 0,1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				unk_0x47F55B6102CA9143(iLocal_95, -0,0062f, -0,0656f, 0,9462f, 0,3169f);
			}
			system::settimera(0);
			break;
		
		case 2:
			unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 0);
			if (unk_0x6ADD12BF4D6D2587(iLocal_98))
			{
				if ((unk_0x6ADD12BF4D6D2587(iLocal_95) && iLocal_95 != iLocal_98) || !unk_0x6ADD12BF4D6D2587(iLocal_95))
				{
					unk_0x5380482A432E314E(&iLocal_98);
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_97))
			{
				if ((unk_0x6ADD12BF4D6D2587(iLocal_95) && iLocal_95 != iLocal_97) || !unk_0x6ADD12BF4D6D2587(iLocal_95))
				{
					unk_0x5380482A432E314E(&iLocal_97);
				}
			}
			if (iLocal_173)
			{
				while (!func_370(0, 1))
				{
					system::wait(0);
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_95))
				{
					func_471(2, vLocal_131, fLocal_132);
				}
				if (!unk_0x191BE1BC8F26F3C1(iLocal_95, 0))
				{
					unk_0xBD8D47FDC6902B2D(iLocal_95, vLocal_131, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_95, fLocal_132);
					unk_0xACE486395AA1867D(iLocal_95, 1084227584);
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_95, -1);
					func_470(&iLocal_89, 14, &iLocal_95, 0);
					if (!unk_0x191BE1BC8F26F3C1(iLocal_95, 0))
					{
						unk_0xAA93B7B448E10E40(iLocal_95, -1072,8f, -1703,923f, 4,138f, 0, 0, 1);
						unk_0x47F55B6102CA9143(iLocal_95, 0,0123f, -0,0057f, 0,9998f, -0,0169f);
					}
				}
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1081,797f, -1699,492f, 3,5179f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 91,1321f);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
				{
					unk_0xBD8D47FDC6902B2D(iLocal_89, -1085,249f, -1703,189f, 3,4167f, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_89, 327,7033f);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_93))
				{
					unk_0xC91FE17AD7353B70(&iLocal_93);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_94))
				{
					unk_0xC91FE17AD7353B70(&iLocal_94);
				}
				while (!func_141(0))
				{
					system::wait(0);
				}
				unk_0x247EAA2E93D4A021(vLocal_133, 10f, 1, 0, 0, false);
				func_180(-1081,797f, -1699,492f, 3,5179f, 91,1321f, 1);
				bLocal_182 = true;
				iLocal_117 = 1;
			}
			break;
		
		case 3:
			iLocal_160 = 0;
			unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 0);
			iLocal_203 = 0;
			iLocal_204 = 0;
			if (iLocal_173)
			{
				while (!func_141(1))
				{
					system::wait(0);
				}
				func_180(vLocal_134, fLocal_135, 1);
				while (!func_370(0, 1))
				{
					system::wait(0);
				}
				func_471(0, -1103,998f, -1691,691f, 3,3147f, 255,7254f);
				unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_93, -1);
				func_471(1, -1100,827f, -1695,758f, 3,3089f, 245,1632f);
				func_470(&iLocal_89, 14, &iLocal_94, -1);
				unk_0x0D9525F20FB71C52(iLocal_158, sLocal_156);
				unk_0x0D9525F20FB71C52(1, sLocal_156);
				unk_0x6450931B826B49D9("veh@bicycle@mountain_f@front@base");
				while ((!unk_0x0840F461D7BD8859(iLocal_158, sLocal_156) || !unk_0x0840F461D7BD8859(1, sLocal_156)) || !unk_0x3A801AA34DD821BE("veh@bicycle@mountain_f@front@base"))
				{
					system::wait(0);
				}
				bVar1 = false;
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
				{
					while (!bVar1)
					{
						system::wait(0);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
						{
							if (unk_0xF0D051E82D0DB8C2(iLocal_89))
							{
								unk_0xFCD667A487259F5A(iLocal_89, unk_0x8B948C59217A295D("MISS_FAMILY2_JIMMY_BICYCLE"));
								bVar1 = true;
							}
						}
					}
				}
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
			}
			iLocal_554 = 0;
			iLocal_555 = 0;
			StringCopy(&Local_556, "", 24);
			break;
		
		case 4:
			if (iLocal_173)
			{
				while (!func_370(0, 1))
				{
					system::wait(0);
				}
				func_180(vLocal_137, fLocal_139, 1);
				func_471(1, vLocal_137, fLocal_139);
				func_471(0, vLocal_136, fLocal_138);
				func_195(&iLocal_89, 14, -1859,072f, -1217,333f, 12,0174f, 24,6128f);
			}
			break;
		
		case 5:
			func_471(3, vLocal_128, fLocal_149);
			if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
			{
				unk_0x47F820A3F8998340(iLocal_92, true);
			}
			iLocal_168 = -1;
			if (iLocal_173)
			{
				while (!func_370(1, 1))
				{
					system::wait(0);
				}
				func_180(vLocal_124, fLocal_125, 1);
				func_195(&iLocal_89, 14, -1859,072f, -1217,333f, 12,0174f, 24,6128f);
				func_471(1, vLocal_137, fLocal_139);
				func_471(0, vLocal_136, fLocal_138);
				if (unk_0xB8DE76287EDC4957(iLocal_93, 0))
				{
					unk_0xAA93B7B448E10E40(iLocal_93, -1867,517f, -1209,121f, 12,5769f, 0, 0, 1);
					unk_0x47F55B6102CA9143(iLocal_93, 0,0501f, -0,0721f, 0,4606f, 0,8833f);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_94, 0))
				{
					unk_0xAA93B7B448E10E40(iLocal_94, -1858,631f, -1214,661f, 12,5761f, 0, 0, 1);
					unk_0x47F55B6102CA9143(iLocal_94, 0,0568f, -0,0661f, 0,6354f, 0,7672f);
				}
			}
			break;
		
		case 6:
			while (!func_370(1, 1))
			{
				system::wait(0);
			}
			if (iLocal_173)
			{
				func_180(-2059,935f, -1026,109f, 9,7454f, 71,3421f, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_92))
			{
				func_471(3, vLocal_128, fLocal_149);
			}
			while (!func_248(0, 1))
			{
				system::wait(0);
			}
			while (!func_248(1, 1))
			{
				system::wait(0);
			}
			while (!func_263())
			{
				system::wait(0);
			}
			func_195(&iLocal_88, 15, -2059,935f, -1026,109f, 9,7454f, 71,3421f);
			func_195(&iLocal_89, 14, vLocal_118, fLocal_148);
			break;
		
		case 7:
			iLocal_159 = 0;
			iLocal_541 = unk_0xCB389937EDB1519A(Vector(-10,77281f, -1509,857f, -919,2169f) + Vector(13,25f, 231f, 232f), Vector(-10,77281f, -1509,857f, -919,2169f) - Vector(13,25f, 231f, 232f), 0, 1, 1, 1);
			iLocal_542 = unk_0xCB389937EDB1519A(Vector(-12,18635f, -888,8414f, -2055,108f) + Vector(14,5f, 250f, 246f), Vector(-12,18635f, -888,8414f, -2055,108f) + Vector(14,5f, 250f, 246f), 0, 1, 0, 1);
			func_469();
			if (iLocal_173)
			{
				func_241(1, 0f);
				while (!func_370(1, 1))
				{
					system::wait(0);
				}
				func_180(vLocal_128, fLocal_149, 1);
				func_471(3, vLocal_129, fLocal_130);
				func_470(&iLocal_88, 15, &iLocal_92, 0);
				bVar2 = false;
				while (!bVar2)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
					{
						if (unk_0xF0D051E82D0DB8C2(iLocal_88))
						{
							bVar2 = true;
						}
					}
					system::wait(0);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
				{
					unk_0xA15269351F50F113(iLocal_92, true, 1, 0);
				}
				unk_0xFB2E9855F95E3BD3(iLocal_92, 17f);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0x8810DC630928B398("FAM2_CHASE_RT");
			}
			if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
			{
				unk_0x4BEFCD5DAE410A90(iLocal_92, 1);
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
				{
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_92, -1);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
				{
					if (!unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0))
					{
						unk_0xBB0358802AA14401(iLocal_88, iLocal_92, 0);
					}
				}
			}
			func_195(&iLocal_89, 14, -1611,595f, -1121,009f, 1,544f, 42,8275f);
			break;
		
		case 8:
			iLocal_159 = 0;
			func_468(0);
			system::settimera(0);
			if (iLocal_173)
			{
				while (!func_370(1, 1))
				{
					system::wait(0);
				}
				func_180(vLocal_211, fLocal_212, 1);
				func_471(3, vLocal_211, fLocal_212);
				func_470(&iLocal_88, 15, &iLocal_92, 0);
				bVar3 = false;
				while (!bVar3)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
					{
						if (unk_0xF0D051E82D0DB8C2(iLocal_88))
						{
							bVar3 = true;
						}
					}
					system::wait(0);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
				{
					if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_92, 0))
					{
						unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_92, -1);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
					{
						if (!unk_0xA8D0477084E86A92(iLocal_88, iLocal_92, 0))
						{
							unk_0xBB0358802AA14401(iLocal_88, iLocal_92, 0);
						}
					}
				}
				if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
				{
					unk_0xFB2E9855F95E3BD3(iLocal_92, 10f);
					unk_0xA15269351F50F113(iLocal_92, true, 1, 0);
				}
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0xFB2E9855F95E3BD3(iLocal_92, 10f);
			}
			if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
			{
				unk_0x4BEFCD5DAE410A90(iLocal_92, 1);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
			{
				unk_0x771A86309E0CA47B(iLocal_89, 1);
			}
			break;
		
		case 9:
			if (iLocal_173)
			{
				while (!func_370(1, 1))
				{
					system::wait(0);
				}
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1623,554f, -1132,136f, 0,8638f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 107,3556f);
				if (!func_181())
				{
					unk_0x32C900DD9B686F75(-1624,927f, -1136,749f, 1,045f, 200f, 2);
					system::settimera(0);
					iVar4 = unk_0x53C562FD2B9E3AB0();
					while (!unk_0x64D098EABB2F6F13() && (unk_0x53C562FD2B9E3AB0() - iVar4) < 10000)
					{
						system::wait(0);
					}
					unk_0x81BCCFFE3F019672();
				}
				func_195(&iLocal_88, 15, vLocal_118 + Vector(0f, 1f, 0f), 0f);
				func_195(&iLocal_89, 14, vLocal_118, fLocal_148);
				func_471(3, vLocal_128, fLocal_149);
			}
			break;
		
		case 10:
			break;
	}
	if (iLocal_70 == 7)
	{
	}
	if (func_181())
	{
		switch (iLocal_70)
		{
			case 1:
			case 2:
			case 4:
			case 6:
				func_466(0, -1, 1);
				break;
			
			case 5:
				func_466(0, -1, 1);
				break;
			
			case 7:
				func_466(iLocal_92, -1, 1);
				break;
			
			case 8:
			case 9:
				func_466(iLocal_92, -1, 1);
				break;
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_89))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
		{
			if (!unk_0x6ADD12BF4D6D2587(Local_549[1 /*10*/]))
			{
				func_142(&Local_549, 1, iLocal_89, "JIMMY", 0, 1);
			}
		}
	}
	else if (unk_0x6ADD12BF4D6D2587(Local_549[1 /*10*/]))
	{
		func_245(&Local_549, 1);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_88))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
		{
			if (Local_549[2 /*10*/] == 0)
			{
				func_142(&Local_549, 2, iLocal_88, "TRACEY", 0, 1);
			}
		}
	}
	else if (Local_549[2 /*10*/] != 0)
	{
		func_245(&Local_549, 2);
	}
	if (iLocal_70 != 9)
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	}
	unk_0x84CDD933AFA470D2();
	if (iLocal_173 && iLocal_70 != 7)
	{
		unk_0xB485B73829833C84(unk_0xFC1458A37D98B502());
		unk_0xBB9A3C553EECB180(0f);
		unk_0x7C9705890EF6612E(0f, 1065353216);
	}
	iLocal_172 = 1;
	iLocal_173 = 0;
}

void func_466(int iParam0, int iParam1, int iParam2)//Position - 0x3C8A3
{
	if (func_207() && func_181())
	{
		while (Global_92828 != 6)
		{
			system::wait(0);
		}
		unk_0x6ACDC20166AA3FAC(0);
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xB485B73829833C84(unk_0xFC1458A37D98B502());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x6ADD12BF4D6D2587(iParam0))
				{
					if (unk_0xB8DE76287EDC4957(iParam0, 0))
					{
						if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam0, 0))
						{
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iParam0, iParam1);
							unk_0x7C9705890EF6612E(0f, 1065353216);
							unk_0xBB9A3C553EECB180(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
		}
		unk_0x10DF8268B3B64093();
		func_467(0);
	}
}

void func_467(int iParam0)//Position - 0x3C967
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 13);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 13);
	}
}

void func_468(bool bParam0)//Position - 0x3C990
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_572)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_572[iVar0 /*8*/].f_1))
		{
			if (!bParam0)
			{
				unk_0x486F346ADFE56674(&(Local_572[iVar0 /*8*/].f_1));
			}
			else
			{
				unk_0x68433819717660CF(&(Local_572[iVar0 /*8*/].f_1));
			}
		}
		if (unk_0x6ADD12BF4D6D2587(Local_572[iVar0 /*8*/]))
		{
			if (!bParam0)
			{
				unk_0x5380482A432E314E(&(Local_572[iVar0 /*8*/]));
			}
			else
			{
				unk_0xC91FE17AD7353B70(&(Local_572[iVar0 /*8*/]));
			}
		}
		unk_0x9E6ACDF1473CD846(iVar0 + 1, "fam2amb");
		iVar0++;
	}
}

void func_469()//Position - 0x3CA18
{
	Local_572[0 /*8*/].f_4 = { -857,0314f, -1415,792f, 1,034999f };
	Local_572[0 /*8*/].f_2 = 0;
	Local_572[1 /*8*/].f_4 = { -1037,352f, -1272,711f, -6,625715f };
	Local_572[1 /*8*/].f_2 = 0;
}

void func_470(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3CA64
{
	vector3 vVar0;
	float fVar1;
	
	if (unk_0xB8DE76287EDC4957(*iParam2, 0))
	{
		if (!unk_0x6ADD12BF4D6D2587(*iParam0))
		{
			vVar0 = { unk_0xB3328BA8976B416C(*iParam2, 1) };
			fVar1 = unk_0xF0371FE6E2BF9599(*iParam2);
			if (iParam1 == 15)
			{
				while (!func_95(vVar0, fVar1))
				{
					system::wait(0);
				}
			}
			else
			{
				while (!func_458(vVar0, fVar1))
				{
					system::wait(0);
				}
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(*iParam0) && unk_0xB8DE76287EDC4957(*iParam2, 0))
		{
			if (!unk_0xA8D0477084E86A92(*iParam0, *iParam2, 0))
			{
				unk_0xBB0358802AA14401(*iParam0, *iParam2, iParam3);
			}
		}
	}
}

void func_471(int iParam0, vector3 vParam1, float fParam2)//Position - 0x3CB03
{
	switch (iParam0)
	{
		case 2:
			if (!unk_0x6ADD12BF4D6D2587(iLocal_95))
			{
				while (!func_324(&iLocal_95, 0, vParam1, fParam2, 1, 0))
				{
					system::wait(0);
				}
				unk_0x6F861F183C9CF6FB(iLocal_95, 0, false);
				unk_0x6F861F183C9CF6FB(iLocal_95, 1, false);
				unk_0xFBA991D3A851E195(iLocal_95, 1);
				unk_0xE6B7D51E977A41B6(iLocal_95, "Mike's Car");
			}
			else if (unk_0xB8DE76287EDC4957(iLocal_95, 0))
			{
				unk_0xBD8D47FDC6902B2D(iLocal_95, vParam1, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_95, fParam2);
			}
			break;
		
		case 3:
			if (!unk_0x6ADD12BF4D6D2587(iLocal_92))
			{
				unk_0x6FF834D85E2DD4C6(joaat("seashark"));
				while (!unk_0x9A0B2ED5055D3F0B(joaat("seashark")))
				{
					system::wait(0);
				}
				iLocal_92 = unk_0xEA60F3B426BB095B(joaat("seashark"), vParam1, fParam2, 1, 1, 0);
				unk_0xE6B7D51E977A41B6(iLocal_92, "Mike's Seashark");
				unk_0xA15269351F50F113(iLocal_92, false, 1, 0);
				unk_0x207466E78DA21033(iLocal_92, 1);
				unk_0xDFC63F22B454FFF5(iLocal_92, "OFF");
				func_314(iLocal_92, 205);
			}
			else if (unk_0xB8DE76287EDC4957(iLocal_92, 0))
			{
				unk_0xBD8D47FDC6902B2D(iLocal_92, vParam1, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_92, fParam2);
			}
			break;
		
		case 1:
			if (!unk_0x6ADD12BF4D6D2587(iLocal_94))
			{
				unk_0x6FF834D85E2DD4C6(joaat("cruiser"));
				while (!unk_0x9A0B2ED5055D3F0B(joaat("cruiser")))
				{
					system::wait(0);
				}
				iLocal_94 = unk_0xEA60F3B426BB095B(joaat("cruiser"), vParam1, fParam2, 1, 1, 0);
				unk_0xCF5EB2CB1B30F02C(iLocal_94, 0);
				unk_0xE6B7D51E977A41B6(iLocal_94, "Jimmy's Bike");
				unk_0x207466E78DA21033(iLocal_94, 0);
			}
			else if (unk_0xB8DE76287EDC4957(iLocal_94, 0))
			{
				unk_0xBD8D47FDC6902B2D(iLocal_94, vParam1, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_94, fParam2);
			}
			break;
		
		case 0:
			if (!unk_0x6ADD12BF4D6D2587(iLocal_93))
			{
				unk_0x6FF834D85E2DD4C6(joaat("cruiser"));
				while (!unk_0x9A0B2ED5055D3F0B(joaat("cruiser")))
				{
					system::wait(0);
				}
				iLocal_93 = unk_0xEA60F3B426BB095B(joaat("cruiser"), vParam1, fParam2, 1, 1, 0);
				unk_0xE6B7D51E977A41B6(iLocal_93, "Mike's Bike");
				unk_0xD38F266C132F2897(iLocal_93, false, true, false, false, false, 0, 0, 0);
				unk_0x4D7D93C6E0C1063B(iLocal_93, false);
				unk_0x207466E78DA21033(iLocal_93, 1);
			}
			else if (unk_0xB8DE76287EDC4957(iLocal_93, 0))
			{
				unk_0xBD8D47FDC6902B2D(iLocal_93, vParam1, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_93, fParam2);
			}
			break;
	}
}

void func_472()//Position - 0x3CD26
{
	int iVar0;
	
	unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 1);
	unk_0x981B8A90686AD23E();
	if (iLocal_70 != 7)
	{
		unk_0xFCCDDE0E48CF9588("missfam2_tracy_jetski");
	}
	unk_0x94BD6F0436473406(0,6f);
	unk_0xCA107A9AAF17E75F(iLocal_541, 0);
	unk_0xCA107A9AAF17E75F(iLocal_542, 0);
	if ((iLocal_70 != 5 && iLocal_70 != 8) || iLocal_173)
	{
		unk_0x84CDD933AFA470D2();
	}
	unk_0x1D29C781A978C4FB(1, true);
	unk_0x1D29C781A978C4FB(7, true);
	unk_0x1D29C781A978C4FB(2, true);
	unk_0x1D29C781A978C4FB(4, true);
	unk_0x1D29C781A978C4FB(10, true);
	unk_0x1D29C781A978C4FB(9, true);
	unk_0x1D29C781A978C4FB(8, true);
	func_530();
	func_529();
	func_527();
	if (iLocal_70 < 6 && unk_0x6ADD12BF4D6D2587(iLocal_88))
	{
		unk_0x68433819717660CF(&iLocal_88);
	}
	if (iLocal_70 == 3 || iLocal_70 == 7)
	{
		unk_0xC0EBC1452FCAB15C(0);
	}
	else
	{
		unk_0xC0EBC1452FCAB15C(5);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_108))
	{
		unk_0x452336926718D62A(&iLocal_108);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
	{
		if (unk_0x4759A34EB65CCA39(iLocal_89, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
		{
			unk_0x88235B448509228B(iLocal_89);
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_88))
	{
		if (unk_0x4759A34EB65CCA39(iLocal_88, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
		{
			unk_0x88235B448509228B(iLocal_88);
		}
	}
	if (iLocal_173)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_101[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(iLocal_101[iVar0]));
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_100[iVar0]))
			{
				unk_0x68433819717660CF(&(iLocal_100[iVar0]));
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_99[iVar0]))
			{
				unk_0xC91FE17AD7353B70(&(iLocal_99[iVar0]));
			}
			iVar0++;
		}
		func_468(1);
		unk_0xE7759EF4FF50C51F(0f, 0f);
		if (unk_0x771D0F8F56A5FE6C("FAMILY_2_DRIVE_TO_BEACH"))
		{
			unk_0xE02E32C69260FBB7("FAMILY_2_DRIVE_TO_BEACH");
		}
		if (unk_0x771D0F8F56A5FE6C("FAMILY_2_BIKE_RACE_JIMMY"))
		{
			unk_0xE02E32C69260FBB7("FAMILY_2_BIKE_RACE_JIMMY");
		}
		if (unk_0x771D0F8F56A5FE6C("FAMILY_2_DIVE_INTO_WATER"))
		{
			unk_0xE02E32C69260FBB7("FAMILY_2_DIVE_INTO_WATER");
		}
		if (unk_0x771D0F8F56A5FE6C("FAMILY_2_SWIM_TO_YACHT"))
		{
			unk_0xE02E32C69260FBB7("FAMILY_2_SWIM_TO_YACHT");
		}
		if (unk_0x771D0F8F56A5FE6C("FAMILY_2_JETSKI_CHASE"))
		{
			unk_0xE02E32C69260FBB7("FAMILY_2_JETSKI_CHASE");
		}
		if (unk_0x771D0F8F56A5FE6C("FAMILY_2_JETSKI_GO_TO_BEACH"))
		{
			unk_0xE02E32C69260FBB7("FAMILY_2_JETSKI_GO_TO_BEACH");
		}
		unk_0x8810DC630928B398("FAM2_STOP");
		unk_0x84CDD933AFA470D2();
		unk_0x3E80C2F7BC665259(1);
		func_154();
		func_101();
		if (unk_0x6C97EEC6339FB45C())
		{
			unk_0x7042DDDE71665936(0);
			unk_0xA6C03E3E2533F8F3();
			while (unk_0x6C97EEC6339FB45C())
			{
				system::wait(0);
			}
		}
		if (unk_0xB8DE76287EDC4957(iLocal_94, 0))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_94))
			{
				unk_0x7674774BB9279265(iLocal_94);
			}
		}
		if (iLocal_70 < 4)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_93))
			{
				unk_0x5380482A432E314E(&iLocal_93);
			}
		}
		if (iLocal_70 != 0)
		{
			unk_0xFAC4E1A83A1073D9();
		}
		unk_0xFCCDDE0E48CF9588("missfam2ig_3");
		iLocal_582 = 0;
	}
	if (iLocal_70 > 5)
	{
		bLocal_154 = false;
	}
	if (iLocal_70 != 3)
	{
		unk_0xFCCDDE0E48CF9588("veh@bicycle@mountain_f@front@base");
	}
	while (!func_198(iLocal_70))
	{
		system::wait(0);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_89))
	{
		unk_0xAE01EF4BC84AFE7C(iLocal_89, 185, true);
	}
	if (iLocal_70 == 2)
	{
		func_473(1, "stage_hire_bike", 0, 0, 0, 1);
	}
	else if (iLocal_70 == 3)
	{
		func_473(1, "stage_hire_bike", 0, 0, 0, 0);
	}
	else if ((iLocal_70 == 4 || iLocal_70 == 5) || iLocal_70 == 6)
	{
		func_473(2, "stage_go_to_yacht", 0, 0, 0, 1);
	}
	else if (iLocal_70 == 7)
	{
		func_473(3, "stage_speedophile_chase", 0, 0, 0, 1);
	}
	else if (iLocal_70 == 8)
	{
		func_473(4, "stage_drive_to_beach", 1, 0, 0, 1);
		if (unk_0xC80D31E4B587871C(iLocal_76, 1))
		{
			func_473(5, "stage_drive_to_beach", 1, 0, 0, 1);
		}
		if (unk_0xC80D31E4B587871C(iLocal_76, 2))
		{
			func_473(6, "stage_drive_to_beach", 1, 0, 0, 1);
		}
		if (unk_0xC80D31E4B587871C(iLocal_76, 5))
		{
			func_473(7, "stage_drive_to_beach", 1, 0, 0, 1);
		}
		if (unk_0xC80D31E4B587871C(iLocal_76, 6))
		{
			func_473(8, "stage_drive_to_beach", 1, 0, 0, 1);
		}
	}
	iLocal_159 = 0;
	iLocal_163 = 0;
	if (iLocal_70 > 3)
	{
		func_101();
		unk_0x9E6ACDF1473CD846(1, sLocal_156);
		unk_0x9E6ACDF1473CD846(2, sLocal_156);
	}
}

void func_473(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3D0D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x74C475EB8E73D398("FinaleC2", unk_0x436287B7DB306165()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_92870)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_92870)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_280(1);
		if (iParam0 <= Global_92870)
		{
		}
		iVar1 = func_525(unk_0x436287B7DB306165(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_104555.f_9055.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_523(iVar1);
			cVar3 = { Global_83766[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_104555.f_9055.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xEBDD0888F628D3FB(&cVar3, iVar2, Global_92870, iParam0);
		}
		else
		{
			iVar4 = func_518(unk_0x436287B7DB306165(), 1);
			if (iVar4 != -1)
			{
				Global_104555.f_18544[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_517(iVar4)}, 4);
				unk_0xEBDD0888F628D3FB(&uVar5, 0, Global_92870, iParam0);
			}
			else
}