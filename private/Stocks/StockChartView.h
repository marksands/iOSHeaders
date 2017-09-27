//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ChartIntervalButtonRowDelegate.h"
#import "ChartUpdaterDelegate.h"
#import "StockGraphViewContainer.h"
#import "StockUpdateObserver.h"

@class ChartHUDView, ChartIntervalButtonRow, ChartTitleLabel, ChartUpdater, DashedLineView, LoadingLabel, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSString, Stock, StockChartData, StockChartDisplayMode, StocksViewController, UILabel;

@interface StockChartView : UIView <ChartUpdaterDelegate, ChartIntervalButtonRowDelegate, StockGraphViewContainer, StockUpdateObserver>
{
    LoadingLabel *_loadingLabel;
    ChartUpdater *_chartUpdater;
    ChartIntervalButtonRow *_intervalButtonRow;
    Stock *_stock;
    NSMutableArray *_axisViews;
    NSMutableArray *_xLabelViews;
    NSMutableArray *_yLabelViews;
    DashedLineView *_previousCloseLine;
    UILabel *_previousCloseLabel;
    ChartTitleLabel *_titleView;
    ChartHUDView *_HUDView;
    _Bool _animating;
    _Bool _layoutPending;
    UIView *_chartTopKeyline;
    UIView *_chartBottomKeyline;
    UIView *_xAxisKeyline;
    NSMutableArray *_displayModes;
    NSMutableDictionary *_graphViews;
    _Bool _drawsBottomLine;
    StocksViewController *_controller;
    StockChartData *_chartData;
    NSError *_error;
    StockChartDisplayMode *_currentDisplayMode;
    long long _selectedInterval;
    id <StockChartViewDelegate> _chartViewDelegate;
    long long _preferredInterval;
}

+ (struct CGGradient *)LineBackgroundGradient;
@property(nonatomic) long long preferredInterval; // @synthesize preferredInterval=_preferredInterval;
@property(nonatomic) __weak id <StockChartViewDelegate> chartViewDelegate; // @synthesize chartViewDelegate=_chartViewDelegate;
@property(nonatomic) long long selectedInterval; // @synthesize selectedInterval=_selectedInterval;
@property(nonatomic) _Bool drawsBottomLine; // @synthesize drawsBottomLine=_drawsBottomLine;
@property(retain, nonatomic) StockChartDisplayMode *currentDisplayMode; // @synthesize currentDisplayMode=_currentDisplayMode;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) StockChartData *chartData; // @synthesize chartData=_chartData;
@property(retain, nonatomic) Stock *stock; // @synthesize stock=_stock;
@property(nonatomic) __weak StocksViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)chartIntervalButtonRow:(id)arg1 didSelectChartInterval:(long long)arg2;
- (void)updateChartViewForSelectedInterval;
- (long long)maxSupportedIntervalFromDesiredInterval:(long long)arg1;
- (void)didTransitionToDisplayMode:(id)arg1;
- (void)animateTransitionToDisplayMode:(id)arg1;
- (void)prepareForTransitionToDisplayMode:(id)arg1;
- (void)setLabelsAndAxesAlpha:(double)arg1;
- (void)layoutLoadingStatus;
- (void)_setShowingLoadingStatus:(_Bool)arg1;
- (void)hideLabelsAxesAndGraphs;
- (double)widestYLabelWidthForMode:(id)arg1;
- (void)_layoutTopLabelsHidden:(_Bool)arg1;
- (void)_layoutAxesAndXLabels;
- (void)_layoutYLabels;
- (void)_prepareYAxisLabelsAndPositionsForDisplayMode:(id)arg1;
- (double)_evennessOfValue:(double)arg1 inRange:(double)arg2;
- (void)_prepareXAxisLabelsAndPositions;
- (void)_setHourLabels;
- (void)_setDayLabelsWithInterval:(unsigned int)arg1 realTimePositions:(_Bool)arg2;
- (void)_setMonthAndYearLabels;
- (void)createYLabelsForMode:(id)arg1;
- (void)_layoutVolumeSeparatorLineForGraphRect:(struct CGRect)arg1;
- (void)_layoutIntervalButtonRow;
- (void)updateHUDView;
- (void)setShowingHUD:(_Bool)arg1;
- (id)HUDView;
- (void)stockGraphViewReadyForDisplay:(id)arg1;
- (void)renderGraphDataIfNeeded;
- (void)renderGraphDataIfNeededForMode:(id)arg1;
- (struct CGRect)lineGraphFrame;
- (struct CGRect)graphViewFrameForMode:(id)arg1;
- (void)reloadDataIfStale;
- (void)clearData;
- (void)reloadData;
- (_Bool)hadError;
- (_Bool)isLoading;
- (id)chartUpdater;
- (void)chartUpdater:(id)arg1 didFailWithError:(id)arg2;
- (void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2;
- (double)lineGraphBottomPadding;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)forceLayout;
- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (void)_layoutSubviews;
- (void)layoutPreviousClose;
- (void)layoutGraphViews;
- (_Bool)shouldShowLoadingStatus;
- (id)currentGraphView;
@property(readonly, copy) NSString *description;
- (void)resetLocale;
- (void)enumerateGraphsAndDisplayModesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *alternateDisplayModes;
- (id)graphViewForMode:(id)arg1;
- (void)addDisplayMode:(id)arg1;
- (id)initWithInitialDisplayMode:(id)arg1 preferredChartInterval:(long long)arg2 stockChartViewDelegate:(id)arg3;
- (_Bool)isCurrentChart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

