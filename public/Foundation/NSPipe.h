//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;

@interface NSPipe : NSObject
{
}

+ (id)pipe;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_closeOnDealloc;
@property(readonly, retain) NSFileHandle *fileHandleForWriting;
@property(readonly, retain) NSFileHandle *fileHandleForReading;
- (id)init;

@end
