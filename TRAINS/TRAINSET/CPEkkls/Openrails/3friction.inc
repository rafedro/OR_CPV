
	Mass ( 12.3t ) Comment (* tara 12.3t *)
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 5.0m 400.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSNumberAxles ( 2 )
	ORTSNumberBogies ( 0 )
	ORTSLengthBogieCentre ( 5.4m )
	ORTSLengthCarBody ( 8.8m )
	ORTSLengthCouplerFace ( 10.0m )
	ORTSWheelFlangeLength ( 19.151mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.5m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - Two Axle Modern Open Wagons - 12,3;40;2,76;2,857;8,76;2 )
	ORTSDavis_A ( 184 )
	ORTSDavis_B ( 4.3 )
	ORTSDavis_C ( 1.77 )
	DerailRailForce ( 61.5kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	