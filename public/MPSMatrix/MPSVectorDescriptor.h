//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPSVectorDescriptor : NSObject
{
    unsigned long long _length;
    unsigned long long _vectors;
    unsigned long long _vectorBytes;
    unsigned int _dataType;
}

+ (id)vectorDescriptorWithLength:(unsigned long long)arg1 dataType:(unsigned int)arg2;
+ (id)vectorDescriptorWithLength:(unsigned long long)arg1 vectors:(unsigned long long)arg2 vectorBytes:(unsigned long long)arg3 dataType:(unsigned int)arg4;
+ (unsigned long long)vectorBytesForLength:(unsigned long long)arg1 dataType:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned long long vectorBytes; // @synthesize vectorBytes=_vectorBytes;
@property(nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned long long vectors; // @synthesize vectors=_vectors;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (id)init;

@end
