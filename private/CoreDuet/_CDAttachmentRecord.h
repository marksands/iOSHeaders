//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSSet, NSString, NSUUID;

@interface _CDAttachmentRecord : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSUUID *cloudIdentifier; // @dynamic cloudIdentifier;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *interactions; // @dynamic interactions;
@property(nonatomic) long long sizeInBytes; // @dynamic sizeInBytes;
@property(retain, nonatomic) NSString *uti; // @dynamic uti;
@end

