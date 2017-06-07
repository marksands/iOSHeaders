//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUIAccessoryViewController.h>

#import <SearchUI/CNActionViewDelegate-Protocol.h>
#import <SearchUI/CNContactInlineActionsViewControllerDelegate-Protocol.h>
#import <SearchUI/CNUIObjectViewControllerDelegate-Protocol.h>
#import <SearchUI/NUIContainerStackViewDelegate-Protocol.h>

@class CNContactInlineActionsViewController, NSData, NSString, NSURL, UIView;

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNActionViewDelegate, NUIContainerStackViewDelegate>
{
    CNContactInlineActionsViewController *_inlineActionsViewController;
    UIView *_messageButton;
    NSURL *_messageURL;
    UIView *_directionsButton;
    NSData *_mapsData;
    NSString *_name;
    double _latitude;
    double _longitude;
}

+ (_Bool)supportsResult:(id)arg1;
@property double longitude; // @synthesize longitude=_longitude;
@property double latitude; // @synthesize latitude=_latitude;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property(retain) UIView *directionsButton; // @synthesize directionsButton=_directionsButton;
@property(retain) NSURL *messageURL; // @synthesize messageURL=_messageURL;
@property(retain) UIView *messageButton; // @synthesize messageButton=_messageButton;
@property(retain) CNContactInlineActionsViewController *inlineActionsViewController; // @synthesize inlineActionsViewController=_inlineActionsViewController;
- (void).cxx_destruct;
- (void)contactInlineActionsViewController:(id)arg1 willPerformActionOfType:(id)arg2;
- (id)hostingViewControllerForController:(id)arg1;
- (void)updateWithResult:(id)arg1;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;
- (id)setupViewWithStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

