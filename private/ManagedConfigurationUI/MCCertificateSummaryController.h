//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class MCDetailsDescriptionTableCell, MCDetailsHeaderCell, NSArray, NSDate, NSString, UITableViewCell;

@interface MCCertificateSummaryController : PSListController
{
    struct __SecTrust *_trust;
    NSArray *_properties;
    NSString *_displayName;
    NSString *_organizationName;
    NSString *_purpose;
    NSDate *_expiration;
    MCDetailsHeaderCell *_configHeader;
    MCDetailsDescriptionTableCell *_configMiddle;
    UITableViewCell *_configBottom;
    _Bool _backButtonWasHidden;
}

+ (id)_dateFormatter;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)hideActionButton;
- (void)actionButtonPressed:(id)arg1;
- (id)specifiers;
- (void)_setTrust:(struct __SecTrust *)arg1;
- (id)_valueAtPath:(id)arg1;
- (void)dealloc;

@end

