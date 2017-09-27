//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "UNSAttachmentDataProvider.h"

@class NSString, NSURL;

@interface UNSAttachmentData : NSObject <NSCopying, UNSAttachmentDataProvider>
{
    NSURL *_fileURL;
}

+ (Class)dataClassForFamily:(unsigned long long)arg1;
+ (_Bool)isFileValid:(id)arg1;
+ (_Bool)isFileAtURL:(id)arg1 validForFamily:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataForFamily:(unsigned long long)arg1 fromFileURL:(id)arg2 error:(id *)arg3;
+ (id)dataFromFileURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

