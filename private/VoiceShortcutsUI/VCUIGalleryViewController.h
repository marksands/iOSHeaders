//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UISearchBarDelegate.h"
#import "UITableViewDelegate.h"
#import "VCUIAppGalleryViewControllerDelegate.h"
#import "VCUICreateVoiceShortcutViewControllerDelegate.h"
#import "VCUIGalleryDataSourceDelegate.h"
#import "VCUIGallerySectionHeaderViewDelegate.h"

@class NSString, UISearchController, UITableView, VCUIActionDonationCell, VCUIGalleryDataSource, VCVoiceShortcutClient, _UIContentUnavailableView;

@interface VCUIGalleryViewController : UIViewController <VCUICreateVoiceShortcutViewControllerDelegate, VCUIGalleryDataSourceDelegate, UITableViewDelegate, VCUIGallerySectionHeaderViewDelegate, VCUIAppGalleryViewControllerDelegate, UISearchBarDelegate>
{
    double _donationCellHeight;
    VCVoiceShortcutClient *_voiceShortcutClient;
    id <VCUIGalleryViewControllerDelegate> _delegate;
    VCUIGalleryDataSource *_dataSource;
    UITableView *_tableView;
    _UIContentUnavailableView *_noSearchResultsView;
    UISearchController *_searchController;
    VCUIActionDonationCell *_prototypeCell;
    double _donationWithSubtitleCellHeight;
}

+ (void)initialize;
@property(readonly, nonatomic) double donationWithSubtitleCellHeight; // @synthesize donationWithSubtitleCellHeight=_donationWithSubtitleCellHeight;
@property(retain, nonatomic) VCUIActionDonationCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) _UIContentUnavailableView *noSearchResultsView; // @synthesize noSearchResultsView=_noSearchResultsView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) VCUIGalleryDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <VCUIGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VCVoiceShortcutClient *voiceShortcutClient; // @synthesize voiceShortcutClient=_voiceShortcutClient;
@property(readonly, nonatomic) double donationCellHeight; // @synthesize donationCellHeight=_donationCellHeight;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)appGalleryViewControllerDidEnterStateSiriUnavailable:(id)arg1 withCreateVoiceShortcutViewController:(id)arg2;
- (void)appGalleryViewControllerDidFinish:(id)arg1;
- (void)gallerySectionHeaderView:(id)arg1 didSelectSeeAllWithApplicationBundleIdentifier:(id)arg2;
- (void)galleryDataSourceDidUpdate:(id)arg1 resultsFound:(_Bool)arg2;
- (void)_setSeparatorInsets;
- (void)createVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setupActionDonationCellReuseIdentifiers;
- (void)setNeedsToComputeDonationCellHeights;
- (double)cellHeightForDonation:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)keyboardWillChangeFrame:(id)arg1;
- (id)initWithVoiceShortcutClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

