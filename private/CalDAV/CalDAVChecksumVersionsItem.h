//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem
{
    NSMutableSet *_versionStringsSupported;
}

- (void).cxx_destruct;
- (id)copyParseRules;
- (_Bool)supportsVersion:(id)arg1;
- (void)addVersionSupported:(id)arg1;
- (id)init;

@end

