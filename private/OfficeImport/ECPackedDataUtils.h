//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ECPackedDataUtils : NSObject
{
}

+ (id)dumpDataToHexadecimalString:(char *)arg1 start:(unsigned int)arg2 stop:(unsigned int)arg3 nicelyFormatted:(_Bool)arg4;
+ (void)writeString:(id)arg1 toPackedData:(struct __CFData *)arg2 packedDataSize:(unsigned int)arg3 atIndex:(unsigned int)arg4 withPreviousLength:(unsigned short)arg5 outLength:(unsigned short *)arg6;
+ (id)readStringFromData:(char *)arg1 atOffset:(unsigned int)arg2 withLength:(unsigned int)arg3;
+ (char *)prepareForDataOfLength:(unsigned int)arg1 atIndex:(unsigned int)arg2 withPreviousLength:(unsigned int)arg3 inPackedData:(struct __CFData *)arg4 packedDataSize:(unsigned int)arg5;
+ (_Bool)setData:(char *)arg1 ofLength:(unsigned int)arg2 atIndex:(unsigned int)arg3 withPreviousLength:(unsigned int)arg4 inPackedData:(struct __CFData *)arg5 packedDataSize:(unsigned int)arg6;

@end

