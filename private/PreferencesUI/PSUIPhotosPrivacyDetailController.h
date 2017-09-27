//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PSUIPhotosPrivacyDetailController : PSListController
{
    NSArray *_orderdAuthTypes;
    NSDictionary *_serviceLevelsByAuthType;
    NSMutableDictionary *_grantStatusByAuthType;
    NSMutableDictionary *_specifierByAuthType;
}

- (void).cxx_destruct;
- (void)_refreshLinkStatusInParent;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)accesssForSpecifier:(id)arg1;
- (void)setAccess:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (void)_reloadAuthorizations;
- (void)_updateSpecifiersUI;
- (void)_updateSpecifiers;
- (void)_updateAuthStatus;
- (struct __CFBundle *)appBundle;
- (id)init;

@end

