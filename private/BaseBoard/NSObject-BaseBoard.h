//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (BaseBoard)
+ (_Bool)bs_synchronousWrapper:(CDUnknownBlockType)arg1 timeout:(double)arg2;
+ (id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2;
+ (id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2;
+ (id)bs_objectFromData:(id)arg1;
+ (id)bs_secureDataFromObject:(id)arg1;
+ (id)bs_dataFromObject:(id)arg1;
+ (id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2;
+ (id)bs_secureDecodedFromData:(id)arg1;
+ (id)bs_decodedFromData:(id)arg1;
- (_Bool)bs_performSynchronously:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (_Bool)bs_performSynchronously:(CDUnknownBlockType)arg1;
- (id)bs_secureEncoded;
- (id)bs_encoded;
- (_Bool)bs_isPlistableType;
@end

