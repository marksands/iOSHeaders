//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PathObject : NSObject
{
    int _len;
    char *_path;
}

+ (id)pathObjectWithPath:(const char *)arg1 component:(const char *)arg2;
@property(readonly) int len; // @synthesize len=_len;
@property(readonly) char *path; // @synthesize path=_path;
- (id)description;
- (void)dealloc;
- (id)initWithPath:(const char *)arg1 component:(const char *)arg2;

@end

