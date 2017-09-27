//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MFAttachmentRaw : NSObject
{
    NSData *_data;
    NSString *_fileName;
    NSString *_mimeType;
    NSString *_contentID;
}

+ (id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
+ (id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;

@end

