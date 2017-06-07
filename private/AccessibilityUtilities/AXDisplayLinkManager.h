//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface AXDisplayLinkManager : NSObject
{
    _Bool _hasUpdatedTargetActions;
    _Bool _handlingDisplayRefresh;
    CADisplayLink *_storedDisplayLink;
    NSMutableSet *_activeTargetActions;
    NSMutableSet *_updatedTargetActions;
    unsigned long long _warmUpModeRequirementsCount;
}

+ (void)_releaseCurrentDisplayLinkManager;
+ (id)currentDisplayLinkManager;
@property(nonatomic) unsigned long long warmUpModeRequirementsCount; // @synthesize warmUpModeRequirementsCount=_warmUpModeRequirementsCount;
@property(nonatomic, getter=isHandlingDisplayRefresh) _Bool handlingDisplayRefresh; // @synthesize handlingDisplayRefresh=_handlingDisplayRefresh;
@property(nonatomic) _Bool hasUpdatedTargetActions; // @synthesize hasUpdatedTargetActions=_hasUpdatedTargetActions;
@property(retain, nonatomic) NSMutableSet *updatedTargetActions; // @synthesize updatedTargetActions=_updatedTargetActions;
@property(retain, nonatomic) NSMutableSet *activeTargetActions; // @synthesize activeTargetActions=_activeTargetActions;
@property(retain, nonatomic) CADisplayLink *storedDisplayLink; // @synthesize storedDisplayLink=_storedDisplayLink;
- (void).cxx_destruct;
- (void)_displayDidRefresh:(id)arg1;
- (void)endRequiringWarmUpMode;
- (void)beginRequiringWarmUpMode;
@property(readonly, nonatomic, getter=isWarmUpModeEnabled) _Bool warmUpModeEnabled;
- (void)_didRemoveLastTargetAction;
- (void)_didAddFirstTargetAction;
- (id)_prepareUpdatedTargetActionsForModification;
- (void)removeTarget:(id)arg1 selector:(SEL)arg2;
- (void)addTarget:(id)arg1 selector:(SEL)arg2;
@property(retain, nonatomic) CADisplayLink *displayLink;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
- (id)init;

@end

