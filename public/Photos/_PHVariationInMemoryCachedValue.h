//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSURL;

@interface _PHVariationInMemoryCachedValue : NSObject
{
    NSDictionary *_info;
    NSURL *_fileURL;
    NSDate *_expectedDate;
}

@property(readonly, nonatomic) NSDate *expectedDate; // @synthesize expectedDate=_expectedDate;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValid;
- (id)_currentFileModificationDate;
- (id)initWithInfo:(id)arg1 fileURL:(id)arg2;

@end

