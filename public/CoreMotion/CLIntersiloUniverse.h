//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLIntersiloUniverse.h"

@class CLServiceVendor, CLSilo, NSString;

@interface CLIntersiloUniverse : NSObject <CLIntersiloUniverse>
{
    CLSilo *_silo;
    CLServiceVendor *_vendor;
}

+ (id)newSharedVendorUniverseWithSilo:(id)arg1;
+ (id)newIsolatedUniverseWithOnlySilo:(id)arg1;
@property(readonly, nonatomic) CLServiceVendor *vendor; // @synthesize vendor=_vendor;
@property(readonly, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 silo:(id)arg2 vendor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

