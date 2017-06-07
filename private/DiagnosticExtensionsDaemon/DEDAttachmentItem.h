//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface DEDAttachmentItem : NSObject
{
    NSString *_deviceID;
    NSString *_displayName;
    NSDate *_modificationDate;
    NSNumber *_fileSize;
    NSURL *_attachedPath;
}

+ (id)itemWithDEItem:(id)arg1;
+ (id)itemWithDictionary:(id)arg1;
+ (id)itemWithURL:(id)arg1;
@property(retain) NSURL *attachedPath; // @synthesize attachedPath=_attachedPath;
@property(retain) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isLocal;
- (id)serialize;

@end

