//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

@class HFItemManager<HUUserItemManager>, NSAttributedString, _HUUserAvatarHeaderView;

@interface HUUserTableViewController : HUItemTableViewController
{
    HFItemManager<HUUserItemManager> *_userItemManager;
    NSAttributedString *_headerMessage;
    _HUUserAvatarHeaderView *_userAvatarHeaderView;
}

@property(retain, nonatomic) _HUUserAvatarHeaderView *userAvatarHeaderView; // @synthesize userAvatarHeaderView=_userAvatarHeaderView;
@property(retain, nonatomic) NSAttributedString *headerMessage; // @synthesize headerMessage=_headerMessage;
@property(readonly, nonatomic) HFItemManager<HUUserItemManager> *userItemManager; // @synthesize userItemManager=_userItemManager;
- (void).cxx_destruct;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)performRemovalAction:(id)arg1;
- (id)userHandle;
- (id)itemTableHeaderView;
- (id)initWithUserItemManager:(id)arg1;

@end

