//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PSUsageBundleApp;

@interface PSUsageBundleCategory : NSObject
{
    PSUsageBundleApp *_usageBundleApp;
    NSString *_identifier;
    NSString *_name;
}

+ (id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak PSUsageBundleApp *usageBundleApp; // @synthesize usageBundleApp=_usageBundleApp;
- (void).cxx_destruct;
- (id)description;

@end

