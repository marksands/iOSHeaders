//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface IDSCKRecordZoneID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_zoneName;
    NSString *_ownerName;
}

+ (id)alloc;
+ (Class)__class;
@property(readonly, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void).cxx_destruct;

@end

