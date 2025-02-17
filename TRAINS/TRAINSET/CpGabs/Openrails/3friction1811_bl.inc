
	Mass ( 80t ) Comment (* tara 26,8t *)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 0.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 16.66m )
	ORTSLengthCarBody ( 20.46m )
	ORTSLengthCouplerFace ( 21.7m )
	ORTSNumberAxles ( 4 )
	ORTSNumberBogies ( 2 )
	ORTSWheelFlangeLength ( 19.151mm )
	ORTSMaximumWheelFlangeAngle ( 62deg )

Comment( *** Friction / Adhesion *** )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 )
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.46m )
			)
		)
	)
 	Comment (Friction Calculator - Good Wagon - Bogie Wagons Vans - 28;80;2,77;4,17;20,46;4 )
	ORTSDavis_A ( 861 )
	ORTSDavis_B ( 24.2 )
 	Comment (Friction Calculator - Good Wagon - Bogie Wagons Open auto racks - 28;80;2,77;4,17;20,46;4 )
	ORTSDavis_C ( 3.41 )
	DerailRailForce ( 400kN )
	ORTSBearingType ( Roller )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailBufferForce ( 400kN )
	