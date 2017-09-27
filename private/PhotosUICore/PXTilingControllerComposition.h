//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface PXTilingControllerComposition : NSObject
{
    _Bool _active;
    NSSet *_tilingControllers;
    id <PXTilingControllerCompositionInput> _input;
    id <PXTilingControllerCompositionOutput> _output;
    id <PXTilingScrollController> __scrollController;
    id <PXTilingControllerCompositionObserver> _observer;
}

@property(nonatomic) __weak id <PXTilingControllerCompositionObserver> observer; // @synthesize observer=_observer;
@property(nonatomic, setter=_setScrollController:) __weak id <PXTilingScrollController> _scrollController; // @synthesize _scrollController=__scrollController;
@property(nonatomic) __weak id <PXTilingControllerCompositionOutput> output; // @synthesize output=_output;
@property(nonatomic) __weak id <PXTilingControllerCompositionInput> input; // @synthesize input=_input;
@property(readonly, copy, nonatomic) NSSet *tilingControllers; // @synthesize tilingControllers=_tilingControllers;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)invalidateCompositionWithContext:(id)arg1;
- (void)invalidateComposition;
- (void)updateComposition;

@end

