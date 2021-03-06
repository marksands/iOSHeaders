//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MusicProductDescriptionTableViewCellDelegate.h"
#import "MusicProductMetadataTableViewCellDelegate.h"
#import "MusicTableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MusicMediaDetailTintInformation, MusicProductDescription, MusicProductDescriptionTableViewCell, MusicTableView, NSIndexSet, NSMutableIndexSet, NSString, UIColor;

@interface MusicProductAdditionalMetadataViewController : UIViewController <MusicProductDescriptionTableViewCellDelegate, MusicProductMetadataTableViewCellDelegate, MusicTableViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIColor *_customSelectionTintColor;
    UIColor *_defaultSelectionTintColor;
    NSMutableIndexSet *_metadataItems;
    MusicProductDescriptionTableViewCell *_productDescriptionTableViewCell;
    MusicTableView *_tableView;
    struct {
        unsigned int didSelectAddSongsButton:1;
        unsigned int didUpdateProductDescription:1;
        unsigned int didUpdatePublicSwitchState:1;
        unsigned int didUpdateVisibleSwitchState:1;
        unsigned int didFinishContentHeightAnimation:1;
        unsigned int willBeginContentHeightAnimation:1;
        unsigned int shouldDeferContentHeightAnimationUpdates:1;
    } _delegateRespondsToSelector;
    _Bool _publicSwitchOn;
    _Bool _trailingSeparatorInsetFollowsLayoutInsets;
    _Bool _visibleSwitchOn;
    NSIndexSet *_allowedMetadataItems;
    id <MusicProductAdditionalMetadataViewControllerDelegate> _delegate;
    MusicMediaDetailTintInformation *_detailTintInformation;
    MusicProductDescription *_productDescription;
    long long _productDescriptionMaximumLengthForTextInput;
    long long _productDescriptionTextStyle;
    NSString *_publicSwitchDescription;
    NSString *_visibleSwitchDescription;
}

@property(nonatomic, getter=isVisibleSwitchOn) _Bool visibleSwitchOn; // @synthesize visibleSwitchOn=_visibleSwitchOn;
@property(copy, nonatomic) NSString *visibleSwitchDescription; // @synthesize visibleSwitchDescription=_visibleSwitchDescription;
@property(nonatomic) _Bool trailingSeparatorInsetFollowsLayoutInsets; // @synthesize trailingSeparatorInsetFollowsLayoutInsets=_trailingSeparatorInsetFollowsLayoutInsets;
@property(nonatomic, getter=isPublicSwitchOn) _Bool publicSwitchOn; // @synthesize publicSwitchOn=_publicSwitchOn;
@property(copy, nonatomic) NSString *publicSwitchDescription; // @synthesize publicSwitchDescription=_publicSwitchDescription;
@property(nonatomic) long long productDescriptionTextStyle; // @synthesize productDescriptionTextStyle=_productDescriptionTextStyle;
@property(nonatomic) long long productDescriptionMaximumLengthForTextInput; // @synthesize productDescriptionMaximumLengthForTextInput=_productDescriptionMaximumLengthForTextInput;
@property(copy, nonatomic) MusicProductDescription *productDescription; // @synthesize productDescription=_productDescription;
@property(copy, nonatomic) MusicMediaDetailTintInformation *detailTintInformation; // @synthesize detailTintInformation=_detailTintInformation;
@property(nonatomic) __weak id <MusicProductAdditionalMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSIndexSet *allowedMetadataItems; // @synthesize allowedMetadataItems=_allowedMetadataItems;
- (void).cxx_destruct;
- (void)_willBeginContentHeightAnimation;
- (void)_updateVisibleMetadataItems;
- (_Bool)_shouldDeferContentHeightAnimationUpdates;
- (void)_reloadTableViewRowHeights;
- (id)_publicSwitchCell;
- (id)_productDescriptionTableViewCell;
- (long long)_metadataItemForRowAtIndexPath:(id)arg1;
- (long long)_rowIndexForMetadataItem:(long long)arg1;
- (void)_didSelectAddSongsButton;
- (void)_didFinishContentHeightAnimation;
- (void)_handlePreferredContentSizeCategoryDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) double effectiveContentHeight;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldForceBottomSeparatorVisibleForSection:(long long)arg2;
- (void)switchDidChangeStateInProductMetadataTableViewCell:(id)arg1;
- (void)productDescriptionDidChangeForProductDescriptionTableViewCell:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

