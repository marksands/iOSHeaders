//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSDictionary;

@interface PSUIPhotosPrivacyController : PSListController
{
    NSDictionary *_serviceLevelsByAuthType;
}

- (void).cxx_destruct;
- (id)_photosAuthDescriptionForAppBundle:(struct __CFBundle *)arg1;
- (id)_photosStatus:(id)arg1;
- (id)_specifiersForService:(struct __CFString *)arg1;
- (id)specifiers;
- (id)init;

@end

