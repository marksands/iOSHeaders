//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSUIOUtils : NSObject
{
}

+ (struct CGDataProvider *)newCGDataProviderForReadChannel:(id)arg1;
+ (struct CGDataProvider *)newCGDataProviderForInputStream:(id)arg1;
+ (void)readAllFromChannel:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

