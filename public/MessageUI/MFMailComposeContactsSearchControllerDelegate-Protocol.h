//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMailAccountProxy, MFMailComposeContactsSearchController, NSArray;

@protocol MFMailComposeContactsSearchControllerDelegate <NSObject>
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 didFindCorecipients:(NSArray *)arg2;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 finishedWithResults:(_Bool)arg2;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 didSortResults:(NSArray *)arg2;
- (MFMailAccountProxy *)sendingAccountProxyForComposeContactsSearchController:(MFMailComposeContactsSearchController *)arg1;
@end

