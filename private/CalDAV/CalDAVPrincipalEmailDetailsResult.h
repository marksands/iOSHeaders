//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, NSURL;

@interface CalDAVPrincipalEmailDetailsResult : NSObject
{
    NSURL *_principalURL;
    NSString *_displayName;
    NSSet *_preferredAddresses;
}

+ (id)resultFromResponseItem:(id)arg1;
@property(retain, nonatomic) NSSet *preferredAddresses; // @synthesize preferredAddresses=_preferredAddresses;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
- (void).cxx_destruct;
- (id)description;
- (id)addresses;

@end

