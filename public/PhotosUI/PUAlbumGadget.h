//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGadget.h"

@class NSIndexSet, NSString, PHCollection, PUAlbumListCellContentView, PUAlbumListCellContentViewHelper, PXGadgetSpec;

__attribute__((visibility("hidden")))
@interface PUAlbumGadget : NSObject <PXGadget>
{
    _Bool _contentViewVisible;
    _Bool _needsUpdate;
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    PUAlbumListCellContentView *_albumListCellContentView;
    PHCollection *_collection;
    id <PUAlbumGadgetDelegate> _albumGadgetDelegate;
    NSIndexSet *_indexesOfHiddenStackItems;
}

@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic, getter=isContentViewVisible) _Bool contentViewVisible; // @synthesize contentViewVisible=_contentViewVisible;
@property(copy, nonatomic) NSIndexSet *indexesOfHiddenStackItems; // @synthesize indexesOfHiddenStackItems=_indexesOfHiddenStackItems;
@property(nonatomic) __weak id <PUAlbumGadgetDelegate> albumGadgetDelegate; // @synthesize albumGadgetDelegate=_albumGadgetDelegate;
@property(retain, nonatomic) PHCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
@property(readonly, nonatomic) PUAlbumListCellContentViewHelper *albumListCellContentViewHelper;
- (struct NSObject *)contentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (long long)estimatedIndexInCollection:(id)arg1 ofAssetForStackItemAtIndex:(long long)arg2;
- (struct CGRect)rectForStackItemAtIndex:(long long)arg1 inCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) PUAlbumListCellContentView *albumListCellContentView; // @synthesize albumListCellContentView=_albumListCellContentView;
@property(readonly, nonatomic) NSString *title;
- (void)_updateContent;
- (void)reconfigure;
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic) struct CGRect visibleContentRect;

@end

