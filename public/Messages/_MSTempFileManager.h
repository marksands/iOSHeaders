//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface _MSTempFileManager : NSObject
{
    NSHashTable *_registry;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSHashTable *registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (id)writeTemporaryFileWithData:(id)arg1 type:(id)arg2;
- (id)init;

@end

