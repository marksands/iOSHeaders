//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGadget.h"

@class NSString, PXContentUnavailableView, PXGadgetSpec;

@interface PXNoContentGadget : NSObject <PXGadget>
{
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    double _contentHeightAdjustment;
    PXContentUnavailableView *_noContentView;
    double _minimumContentHeight;
}

@property(readonly, nonatomic) double minimumContentHeight; // @synthesize minimumContentHeight=_minimumContentHeight;
@property(retain, nonatomic) PXContentUnavailableView *noContentView; // @synthesize noContentView=_noContentView;
@property(nonatomic) double contentHeightAdjustment; // @synthesize contentHeightAdjustment=_contentHeightAdjustment;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct NSObject *)contentView;
- (_Bool)hasLoadedContentData;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (void)configureWithButtonTitle:(id)arg1 buttonAction:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 minimumContentHeight:(double)arg3;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic) struct CGRect visibleContentRect;

@end

