//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNGroup.h>

@class NSString;

@interface CNMutableGroup : CNGroup
{
}

- (id)freezeWithSelfAsSnapshot;
- (id)freeze;
@property(copy, nonatomic) CNGroup *snapshot; // @dynamic snapshot;
- (void)adoptValuesFromAndSetSnapshot:(id)arg1;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int iOSLegacyIdentifier; // @dynamic iOSLegacyIdentifier;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)copy;

@end

