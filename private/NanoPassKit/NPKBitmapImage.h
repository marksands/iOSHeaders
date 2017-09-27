//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface NPKBitmapImage : NSObject
{
    unsigned int _bitmapInfo;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _bitsPerComponent;
    unsigned long long _bitsPerPixel;
    unsigned long long _bytesPerRow;
    NSData *_bitmapData;
}

@property(retain) NSData *bitmapData; // @synthesize bitmapData=_bitmapData;
@property unsigned int bitmapInfo; // @synthesize bitmapInfo=_bitmapInfo;
@property unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property unsigned long long bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property unsigned long long bitsPerComponent; // @synthesize bitsPerComponent=_bitsPerComponent;
@property unsigned long long height; // @synthesize height=_height;
@property unsigned long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)enumerateAllPixels:(CDUnknownBlockType)arg1;
- (struct CGImage *)createImageRef;
- (id)encodedImage;
- (id)initWithEncodedImage:(id)arg1;
- (id)initWithCGImageRef:(struct CGImage *)arg1;

@end

