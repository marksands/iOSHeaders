//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIWebFileUploadItem : NSObject
{
    NSString *_filePath;
}

@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (_Bool)isVideo;
- (id)displayImage;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end

