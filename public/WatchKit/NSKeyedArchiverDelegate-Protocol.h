//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSKeyedArchiver;

@protocol NSKeyedArchiverDelegate <NSObject>

@optional
- (void)archiverDidFinish:(NSKeyedArchiver *)arg1;
- (void)archiverWillFinish:(NSKeyedArchiver *)arg1;
- (void)archiver:(NSKeyedArchiver *)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
- (void)archiver:(NSKeyedArchiver *)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(NSKeyedArchiver *)arg1 willEncodeObject:(id)arg2;
@end

