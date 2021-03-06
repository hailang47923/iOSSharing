//
//  OperationDependence.h
//  MacDemo
//
//  Created by Kystar's Mac Book Pro on 2019/4/8.
//  Copyright © 2019 kystar. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OperationDependence : NSObject

- (void)barrier;
- (void)groupNotifier;
- (void)operationDependency;
- (void)semaphore;

@end

NS_ASSUME_NONNULL_END
