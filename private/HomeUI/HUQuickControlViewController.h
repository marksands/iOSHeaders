//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HUPreloadableViewController.h"
#import "HUQuickControlContentCharacteristicWriting.h"
#import "HUQuickControlInteractiveContentContaining.h"
#import "HUQuickControlItemHosting.h"

@class HMHome, NSSet, NSString;

@interface HUQuickControlViewController : UIViewController <HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlItemHosting, HUPreloadableViewController>
{
    _Bool _userInteractionEnabled;
    id <HUQuickControlContentCharacteristicWritingDelegate> _characteristicWritingDelegate;
    id <HUQuickControlContentHosting> _quickControlHost;
    id <HULayoutAnchorProviding> _preferredFrameLayoutGuide;
    HMHome *_home;
    NSSet *_controlItems;
    id <HUQuickControlItemUpdating> _itemUpdater;
    id <HUQuickControlViewControllerDelegate> _delegate;
    unsigned long long _controlSize;
}

+ (id)controlItemPredicate;
@property(nonatomic) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property(nonatomic) __weak id <HUQuickControlViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <HUQuickControlItemUpdating> itemUpdater; // @synthesize itemUpdater=_itemUpdater;
@property(readonly, copy, nonatomic) NSSet *controlItems; // @synthesize controlItems=_controlItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) __weak id <HUQuickControlContentHosting> quickControlHost; // @synthesize quickControlHost=_quickControlHost;
@property(nonatomic) __weak id <HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate; // @synthesize characteristicWritingDelegate=_characteristicWritingDelegate;
- (void).cxx_destruct;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (id)childQuickControlContentViewControllers;
@property(readonly, copy, nonatomic) NSSet *affectedCharacteristics;
- (id)overrideValueForCharacteristic:(id)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
@property(readonly, copy, nonatomic) NSString *overrideSecondaryStatusText;
@property(readonly, copy, nonatomic) NSString *overrideStatusText;
@property(readonly, nonatomic) _Bool shouldShowControlWhenUnreachable;
@property(readonly, nonatomic) _Bool hasSingleControlView;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
@property(retain, nonatomic) id <HULayoutAnchorProviding> preferredFrameLayoutGuide; // @synthesize preferredFrameLayoutGuide=_preferredFrameLayoutGuide;
- (id)hu_preloadContent;
@property(readonly, nonatomic) unsigned long long preferredPresentationStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

