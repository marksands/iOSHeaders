//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "SXLayouterDelegate.h"

@class NSString, SXLayoutAttributes, SXLayoutBlueprint, SXLayoutDataProvider;

@interface SXLayoutOperation : NSOperation <SXLayouterDelegate>
{
    _Bool _executing;
    _Bool _finished;
    double _constrainedWidth;
    SXLayoutDataProvider *_layoutDataProvider;
    SXLayoutAttributes *_layoutAttributes;
    SXLayoutBlueprint *_layoutBlueprint;
    NSString *_targetComponentIdentifier;
    id <SXDynamicAdController> _dynamicAdController;
    struct CGSize _viewportSize;
}

@property(readonly, nonatomic) id <SXDynamicAdController> dynamicAdController; // @synthesize dynamicAdController=_dynamicAdController;
@property(retain, nonatomic) NSString *targetComponentIdentifier; // @synthesize targetComponentIdentifier=_targetComponentIdentifier;
@property(retain, nonatomic) SXLayoutBlueprint *layoutBlueprint; // @synthesize layoutBlueprint=_layoutBlueprint;
@property(retain, nonatomic) SXLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(readonly, nonatomic) SXLayoutDataProvider *layoutDataProvider; // @synthesize layoutDataProvider=_layoutDataProvider;
@property(readonly, nonatomic) double constrainedWidth; // @synthesize constrainedWidth=_constrainedWidth;
@property(readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
@property _Bool finished; // @synthesize finished=_finished;
@property _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)layouter:(id)arg1 didFinishLayoutForComponent:(id)arg2 layoutBlueprint:(id)arg3 shouldContinueLayout:(_Bool *)arg4;
- (void)finalizeLayoutBlueprint:(id)arg1 startOffset:(struct CGPoint)arg2;
- (void)registerComponent:(id)arg1 toLayoutBlueprint:(id)arg2 layoutDataProvider:(id)arg3 documentColumnLayout:(id)arg4;
- (id)createLayoutBlueprintForLayoutDataProvider:(id)arg1 documentColumnLayout:(id)arg2;
- (void)updateLayoutBlueprint:(id)arg1 usingLayoutDataProvider:(id)arg2;
- (_Bool)isFinishedLayoutBlueprint:(id)arg1 forLayoutDataProvider:(id)arg2;
- (_Bool)isValidLayoutBlueprint:(id)arg1 viewportSize:(struct CGSize)arg2;
- (void)placeDynamicAdsForBlueprint:(id)arg1;
- (void)startLayoutWorkForBlueprint:(id)arg1;
- (void)prepareLayoutBlueprint:(id)arg1;
- (void)doFinishBookKeeping;
- (void)doStartBookKeeping;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)start;
- (id)initWithViewportSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(id)arg3 dynamicAdController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

