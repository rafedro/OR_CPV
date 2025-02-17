
Comment ( ********** Curve Resistance & SuperElevation **********)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1m 668mm )
	ORTSRigidWheelBase ( 3m 200mm )
	ORTSUnbalancedSuperelevation ( 180mm )

Comment ( ********** Derailment Coefficient **********)
	ORTSLengthBogieCentre ( 7.5m )
	ORTSLengthCarBody ( 14.24m )
	ORTSLengthCouplerFace ( 15.38m )
	ORTSNumberAxles ( 0 )
	ORTSNumberBogies ( 2 )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtius_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 71 )
		Wheelset (
			Axle (
				ORTSInertia ( 3500 ) comment ( 78*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.570m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Electric Loco - Modern Locomotives - 78;3,057;4,3;16,2;4 )
	ORTSDavis_A ( 603.26 )
	ORTSDavis_B ( 27.30 )
	ORTSDavis_C ( 0.94 ) comment ( for non-leading vehicles )

	ORTSWagonFrontalArea ( 10.9m^2 )
	ORTSWheelFlangeLength ( 19.1516mm )
	ORTSMaximumWheelFlangeAngle ( 1.308996rad )




	ORTSAntislip ( 0 )

	DerailRailHeight ( 4cm )
	DerailRailForce ( 390kN )
	DerailBufferForce ( 400kN )
	