//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

@class NSObject<OS_dispatch_data>, NSString;

@interface TSPUnknownObject : TSPObject
{
    NSString *_packageLocator;
    NSObject<OS_dispatch_data> *_serializedData;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData; // @synthesize serializedData=_serializedData;
- (void).cxx_destruct;
- (id)packageLocator;
- (void)willModifyForUpgrade;
- (void)willModify;
- (id)initWithContext:(id)arg1;

@end

