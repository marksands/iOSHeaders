//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCAttachmentViewController.h>

@class NCAudioPlayerControlsViewController;

@interface NCAudioAttachmentViewController : NCAttachmentViewController
{
    NCAudioPlayerControlsViewController *_playerViewController;
}

@property(retain, nonatomic) NCAudioPlayerControlsViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void).cxx_destruct;
- (unsigned long long)customContentLocation;
- (void)viewDidLoad;
- (struct CGSize)contentSize;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;

@end

