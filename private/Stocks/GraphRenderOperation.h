//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, StockChartDisplayMode, StockGraphImageSet;

@interface GraphRenderOperation : NSObject
{
    _Bool _cancelled;
    _Bool _roundLineCaps;
    unsigned int _volumeCount;
    struct CGPoint *_points;
    NSArray *_linePointCounts;
    NSArray *_dottedLinePositions;
    NSArray *_dottedLinePositionsForStyleOnly;
    CDStruct_b5bb7d6f *_volumeBars;
    double _volumeBarWidth;
    unsigned long long _maxVolume;
    id <GraphRenderOperationDelegate> _delegate;
    StockGraphImageSet *_graphImageSet;
    StockChartDisplayMode *_displayMode;
    struct CGSize _graphSize;
    struct CGSize _volumeGraphSize;
    struct UIEdgeInsets _graphInsets;
}

@property(retain, nonatomic) StockChartDisplayMode *displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) _Bool roundLineCaps; // @synthesize roundLineCaps=_roundLineCaps;
@property(retain, nonatomic) StockGraphImageSet *graphImageSet; // @synthesize graphImageSet=_graphImageSet;
@property(nonatomic) struct UIEdgeInsets graphInsets; // @synthesize graphInsets=_graphInsets;
@property(nonatomic) struct CGSize volumeGraphSize; // @synthesize volumeGraphSize=_volumeGraphSize;
@property(nonatomic) struct CGSize graphSize; // @synthesize graphSize=_graphSize;
@property(nonatomic) __weak id <GraphRenderOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int volumeCount; // @synthesize volumeCount=_volumeCount;
@property(nonatomic) unsigned long long maxVolume; // @synthesize maxVolume=_maxVolume;
@property(nonatomic) double volumeBarWidth; // @synthesize volumeBarWidth=_volumeBarWidth;
@property(nonatomic) CDStruct_b5bb7d6f *volumeBars; // @synthesize volumeBars=_volumeBars;
@property(retain, nonatomic) NSArray *dottedLinePositionsForStyleOnly; // @synthesize dottedLinePositionsForStyleOnly=_dottedLinePositionsForStyleOnly;
@property(retain, nonatomic) NSArray *dottedLinePositions; // @synthesize dottedLinePositions=_dottedLinePositions;
@property(retain, nonatomic) NSArray *linePointCounts; // @synthesize linePointCounts=_linePointCounts;
@property(nonatomic) struct CGPoint *points; // @synthesize points=_points;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)renderVolumeGraph;
- (void)renderLineGraph;
- (void)renderGraphLineInContext:(struct CGContext *)arg1 withColor:(id)arg2 offset:(struct CGPoint)arg3;
- (struct CGSize)lineGraphSize;
- (void)render;
- (void)cancel;

@end

