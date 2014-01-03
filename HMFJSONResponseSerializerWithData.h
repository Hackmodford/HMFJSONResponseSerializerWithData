//
//  HMFJSONResponseSerializerWithData.h
//
//  Created by Brandon Butler on 10/15/13.
//  Copyright (c) 2013 Brandon Butler. All rights reserved.
//

#import "AFURLResponseSerialization.h"

/// NSError userInfo keys that will contain response data
static NSString * const JSONResponseSerializerWithDataKey = @"body";
static NSString * const JSONResponseSerializerWithBodyKey = @"statusCode";

@interface HMFJSONResponseSerializerWithData : AFJSONResponseSerializer

@end
